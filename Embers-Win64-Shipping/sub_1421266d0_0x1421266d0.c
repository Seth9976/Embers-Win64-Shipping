// 函数: sub_1421266d0
// 地址: 0x1421266d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_30 = 2
int32_t var_2c = 0xffffffff
bool cond:0 = sub_140cdd6a0(arg1) s< 0x120
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
int64_t rax_3

if (cond:0)
    if (data_143f4bf98 s> *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f4bf98)
        
        if (data_143f4bf98 == 0xffffffff)
            sub_140b58260(&data_143f4bf90, u"RefractionBias", 1)
            _Init_thread_footer(&data_143f4bf98)
    
    rax_3 = data_143f4bf90
else
    if (data_143f4bf88 s> *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f4bf88)
        
        if (data_143f4bf88 == 0xffffffff)
            sub_140b58260(&data_143f4bf80, u"RefractionDepthBias", 1)
            _Init_thread_footer(&data_143f4bf88)
    
    rax_3 = data_143f4bf80

int64_t var_38 = rax_3
int64_t var_28
sub_140b4c620(&var_28, &var_38)
int32_t rbx = 0
uint64_t result

if (*(arg1 + 0xe8) s<= 0)
label_142126833:
    int64_t* rcx_5 = *(arg1 + 0xd0)
    
    if (rcx_5 != 0)
        return (*(*rcx_5 + 0x3e0))(rcx_5, arg2)
    
    result.b = 0
else
    int64_t rsi_1 = 0
    
    while (true)
        int32_t* rdi_2 = *(arg1 + 0xe0) + rsi_1
        char var_1c
        void arg_8
        
        if (*sub_140b4c620(&arg_8, rdi_2) == var_28 && rdi_2[3] == var_2c && rdi_2[2].b == var_1c)
            *arg2 = rdi_2[4]
            result.b = 1
            break
        
        rbx += 1
        rsi_1 += 0x24
        
        if (rbx s>= *(arg1 + 0xe8))
            goto label_142126833

return result
