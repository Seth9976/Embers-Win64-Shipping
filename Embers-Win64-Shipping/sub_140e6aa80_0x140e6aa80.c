// 函数: sub_140e6aa80
// 地址: 0x140e6aa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = arg1
int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t r8
r8.b = 1
int64_t* result = (*(*rcx + 0xb0))(rcx, u"EnableHighDPIAwareness", r8)

if (result != 0)
    void* rcx_1 = data_143ddb400
    char arg_10 = 1
    sub_140af2fd0(rcx_1, /Script/Engine.UserInterfaceSettings", bAllowHighDPIInGameMode", &arg_10, 
        &data_143de5780)
    
    if (arg_10 != 0)
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"nohighdpi") == 0)
            rbx = 1
    
    wchar32 const* const rdx_1 = &(*U"RGBXYZF10|")[8]
    
    if (rbx != 0)
        rdx_1 = &(*U"RGBXYZF10|")[7]
    
    result = (*(*result + 0x80))(result, rdx_1, 0x8000000)
    
    if (rbx != 0)
        return sub_140d87660()

return result
