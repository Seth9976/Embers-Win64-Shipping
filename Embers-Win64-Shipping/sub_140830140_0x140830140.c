// 函数: sub_140830140
// 地址: 0x140830140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg1[1].w != 3)
    result = *arg1
    
    if (result != 0)
        void* rax_1 = sub_140be01c0()
        void* rdx_1 = *(result + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            goto label_140830181
else
    result = data_143ce3880
label_140830181:
    
    if (result != 0)
        void* rax_4 = sub_140bdfe30()
        void* rcx_1 = *(result + 0x10)
        int64_t rdx_2 = sx.q(*(rax_4 + 0x38))
        
        if (rdx_2.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_2 << 3)) == rax_4 + 0x30)
            return result
return 0
