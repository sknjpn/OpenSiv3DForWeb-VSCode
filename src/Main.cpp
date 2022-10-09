#include <Siv3D.hpp>

void Main()
{
    // resourcesから削除しているため、絵文字及びPrintはASCIIを除いて使えない。

    Console << U"Hello World!";

    Scene::SetBackground(ColorF{0.8, 0.9, 1.0});

    const Font font{60};

    while (System::Update())
    {
        font(U"Hello, Siv3D!").drawAt(Scene::Center(), Palette::Black);

        Circle{Cursor::Pos(), 40}.draw(ColorF{1, 0, 0, 0.5});

        if (KeyA.down())
            Console << Sample({U"Hello!", U"こんにちは", U"你好", U"안녕하세요?"});
    }
}
