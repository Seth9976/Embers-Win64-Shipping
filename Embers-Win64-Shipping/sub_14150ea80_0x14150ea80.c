// 函数: sub_14150ea80
// 地址: 0x14150ea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b21160(arg2, 0x38, 0)
void* rdx = arg1[8]
void* r13 = &arg1[7]
int32_t rbp = 0
int64_t r8_1 = sx.q(arg1[9].d) - 1
void* rax_2 = r13

if (rdx != 0)
    rax_2 = rdx

int32_t i = *(rax_2 + ((sx.q(rax_1) & r8_1) << 2))

if (i != 0xffffffff)
    int64_t r15_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int32_t* rdi_1 = r15_1 + i_1 * 0x48
        
        if (sub_1414fc1c0(rdi_1, arg2) != 0)
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t rax_6 = i_1 * 9
                void* rax_7 = *(r13 + 8)
                
                if (rax_7 != 0)
                    r13 = rax_7
                
                void* rdx_3 = ((sx.q(*(r15_1 + (rax_6 << 3) + 0x44)) & r8_1) << 2) + r13
                int32_t j = *rdx_3
                
                while (j != 0xffffffff)
                    if (j == i)
                        *rdx_3 = *(r15_1 + (rax_6 << 3) + 0x40)
                        break
                    
                    int64_t j_1 = sx.q(j)
                    int64_t rdx_5 = j_1 + ((j_1 + 1) << 3)
                    j = *(r15_1 + (rdx_5 << 3))
                    rdx_3 = r15_1 + (rdx_5 << 3)
            
            rbp = 1
            sub_1407c2d20(arg1, i, 1)
            break
        
        i = rdi_1[0x10]
    while (i != 0xffffffff)

return zx.q(rbp)
