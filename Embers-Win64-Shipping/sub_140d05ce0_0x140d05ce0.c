// 函数: sub_140d05ce0
// 地址: 0x140d05ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg1 + 0x158))()
int64_t r9 = *arg1
int64_t entry_r8
int512_t entry_zmm2
int64_t* rax_2 = (*(r9 + 0x158))(arg1, entry_r8, entry_zmm2, r9)
int64_t result = sx.q(rax_1[1].d)

if (result.d != rax_2[1].d)
label_140d05d80:
    result.b = 0
else
    if (result.d != 0)
        int64_t rbx_1 = 0
        int64_t rsi_1 = 0
        
        do
            int32_t* rbp_2 = *rax_1 + rsi_1
            int32_t* r14_2 = *rax_2 + rsi_1
            
            if (sub_140d3c6e0(rbp_2) != sub_140d3c6e0(r14_2))
                goto label_140d05d80
            
            if (*(rbp_2 + 8) != *(r14_2 + 8))
                goto label_140d05d80
            
            rbx_1 += 1
            rsi_1 += 0x10
        while (rbx_1 != result)
    
    result.b = 1

return result
