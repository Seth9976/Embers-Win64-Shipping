// 函数: sub_140d7f1a0
// 地址: 0x140d7f1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8

if (sub_140b74110(6, 0) != 0)
    sub_140af2b60()
    char rax_1 = sub_140b21a10(&data_143dbb3f0, u"d3d12")
    char rax_2
    
    if (rax_1 == 0)
        sub_140af2b60()
        rax_2 = sub_140b21a10(&data_143dbb3f0, u"dx12")
    
    if (rax_1 != 0 || rax_2 != 0)
        int64_t* rax_3 = sub_140b58260(&arg_8, u"D3D12RHI", 1)
        j_sub_140b3db50()
        sub_140b407e0(&data_143de7d78, *rax_3)
    
    int64_t* rax_4 = sub_140b58260(&arg_8, u"D3D11RHI", 1)
    j_sub_140b3db50()
    sub_140b407e0(&data_143de7d78, *rax_4)

int64_t* rax_5 = sub_140b58260(&arg_8, u"OpenGLDrv", 1)
j_sub_140b3db50()
return sub_140b407e0(&data_143de7d78, *rax_5)
