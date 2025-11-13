// 函数: sub_14096f830
// 地址: 0x14096f830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    TEB* gsbase
    
    if (data_143ced3b8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ced3b8)
        
        if (data_143ced3b8 == 0xffffffff)
            int64_t* rcx_9 = data_143db18d0
            
            if (rcx_9 == 0)
                sub_140a53c40()
                rcx_9 = data_143db18d0
            
            int64_t r8_2
            r8_2.b = 1
            data_143ced3b0 = (*(*rcx_9 + 0xb0))(rcx_9, u"voice.MuteAudioEngineOutput", r8_2)
            _Init_thread_footer(&data_143ced3b8)
    
    int64_t* rbx_1 = data_143ced3b0
    int16_t* var_28
    sub_140a2e390(&var_28, u"%d", 1)
    int16_t* const rdx = &data_142d40450
    int32_t var_20
    
    if (var_20 != 0)
        rdx = var_28
    
    (*(*rbx_1 + 0x80))(rbx_1, rdx, 0x2000000)
    int16_t* rcx_2 = var_28
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

void*** rax_4 = j_sub_140a82f30(0xd8)
void*** rsi_1

if (rax_4 == 0)
    rsi_1 = nullptr
else
    int32_t rax_5 = sub_1424378b0()
    rsi_1 = sub_1409494f0(rax_4, arg2, _mm_cvtepi32_ps(zx.o(sub_1424378d0())), rax_5)

int64_t rdi_1 = sx.q(*(arg1 + 0x2e0))
int32_t rax_8 = (rdi_1 + 1).d
*(arg1 + 0x2e0) = rax_8

if (rax_8 s> *(arg1 + 0x2e4))
    sub_1405a4d70(arg1 + 0x2d8)

int64_t rbx_3 = *(arg1 + 0x2d8)
*(rbx_3 + (rdi_1 << 3)) = rsi_1
void var_18
sub_141c333b0(arg1 + 0x1a8, &var_18, 0x2000, 0x3f800000)
sub_14096f5f0(*(rbx_3 + (rdi_1 << 3)), &var_18)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rdi_2 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*var_10 + 8))(var_10, zx.q(rdi_2))

uint64_t result
result.b = 1
return result
