// 函数: sub_142661dd0
// 地址: 0x142661dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
int64_t* rax = sub_14269bba0()
void* rbx = rax[0x23]
uint64_t result

if (rbx != 0)
label_142661e17:
    result = sub_140d2b230(arg1 + 0x28)
    
    if (result != 0)
        void* rcx_2 = *(rbx + 0x10)
        
        if (rcx_2 != 0)
            int64_t rcx_3 = sx.q(*(rcx_2 + 0x38))
            
            if (rcx_3.d s<= *(result + 0x38))
                result = *(result + 0x30)
                
                if (*(result + (rcx_3 << 3)) == rcx_2 + 0x30)
                    *(arg1 + 0x50) ^= (zx.d(data_143f71424) ^ *(arg1 + 0x50)) & 1
                    int32_t rcx_8 = ((*(rbx + 0x68) u>> 1 ^ *(arg1 + 0x50)) & 2) ^ *(arg1 + 0x50)
                    *(arg1 + 0x50) = rcx_8
                    int32_t rdx_7 = ((*(rbx + 0x68) << 2 ^ rcx_8) & 4) ^ rcx_8
                    *(arg1 + 0x50) = rdx_7
                    result = ((zx.q(*(rbx + 0x68) << 2) ^ zx.q(rdx_7)) & 8) ^ zx.q(rdx_7)
                    *(arg1 + 0x50) = result.d
else
    int64_t rdx_1 = *rax
    result = (*(rdx_1 + 0x390))(rax, rdx_1)
    rbx = rax[0x23]
    
    if (rbx != 0)
        goto label_142661e17

return result
