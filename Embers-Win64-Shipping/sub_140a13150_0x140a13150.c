// 函数: sub_140a13150
// 地址: 0x140a13150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x30)

if (rcx != 0)
    opus_decoder_destroy(rcx)
    *(arg1 + 0x30) = 0

int64_t r8 = 0
int32_t result

while (true)
    char rax_1 = arg2[r8]
    r8 += 1
    int32_t rax_2
    
    if (rax_1 == *(r8 + &data_142e4d110:7))
        if (r8 != 7)
            continue
        else
            rax_2 = 0
        
        goto label_140a131c5
    
    if (strcmp(arg2, "A_VORBIS") == 0)
        rax_2 = 1
    label_140a131c5:
        *(arg1 + 0x38) = rax_2
        bool cond:0_1 = *(arg1 + 0x38) != 0
        *(arg1 + 0x40) = arg3
        *(arg1 + 0x44) = arg4
        
        if (not(cond:0_1))
            int32_t arg_8 = 0
            int32_t* rax_3 = opus_decoder_create(arg3, arg4, &arg_8)
            int32_t rcx_3 = *(arg1 + 0x40) * 0x78
            *(arg1 + 0x30) = rax_3
            *(arg1 + 0x3c) = rcx_3 s/ 0x3e8
        label_140a13225:
            int32_t rdx_5 = *(arg1 + 0x20)
            result = *(arg1 + 0x3c) * *(arg1 + 0x44) * 2
            
            if (result s<= rdx_5)
                if (result s< rdx_5 && result != rdx_5)
                    *(arg1 + 0x20) = result
                    sub_1405dac10(arg1 + 0x18)
                
                result.b = 1
            else
                *(arg1 + 0x20) = result
                
                if (result s<= *(arg1 + 0x24))
                    result.b = 1
                else
                    sub_1405daba0(arg1 + 0x18)
                    result.b = 1
            
            break
        
        if (sub_140a13360(arg1, arg5, arg6).b != 0)
            goto label_140a13225
    
    result.b = 0
    break

return result
