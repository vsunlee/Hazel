#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Intialized Log");
	int a = 465845623;
	HZ_INFO("Hello! Val={0}", a);

	// Create application
	auto* app = Hazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif // HZ_PLATFORM_WINDOWS

