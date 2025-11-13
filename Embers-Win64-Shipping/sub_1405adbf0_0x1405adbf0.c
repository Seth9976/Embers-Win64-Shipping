// 函数: sub_1405adbf0
// 地址: 0x1405adbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ac560(arg1)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_142d49cb8
arg1[0xc] = &data_142d49f48
arg1[0xf] = &data_142d49f58
arg1[0x10].d = 0
*(arg1 + 0x84) = 0xffffffff
*(arg1 + 0xac) = 0
arg1[0x15].d = 0xffffffff
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (rcx << 3)) + 0x14

if (data_143cd6230 s> *rdi_1)
    _Init_thread_header(&data_143cd6230)
    
    if (data_143cd6230 == 0xffffffff)
        sub_1405aa900(&data_143cd6218, 
            MaterialInterface'/Composure/Materials/ReplaceTonemapper/ComposureReplaceTonemapperByTexture."
        "ComposureReplaceTonemapperByTexture'", 0)
        atexit(sub_142cb0950)
        _Init_thread_footer(&data_143cd6230)

arg1[0x12] = data_143cd6228

if (data_143cd6250 s> *rdi_1)
    _Init_thread_header(&data_143cd6250)
    
    if (data_143cd6250 == 0xffffffff)
        sub_1405aa900(&data_143cd6238, 
            MaterialInterface'/Composure/Materials/PassSetup/ComposureSimpleSetupMaterial."
        "ComposureSimpleSetupMaterial'", 0)
        atexit(sub_142cb0850)
        _Init_thread_footer(&data_143cd6250)

arg1[0x13] = data_143cd6248
arg1[0xe] = sub_1405c6e90()
return arg1
