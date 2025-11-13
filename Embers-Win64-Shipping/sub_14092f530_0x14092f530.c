// 函数: sub_14092f530
// 地址: 0x14092f530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = *(arg2 + 0x20)
int16_t* rdx

if (rax_1 == 0)
    rdx = &data_142d40450
else
    rdx = *(arg2 + 0x18)

void* rbx = arg1[8]
void* r15 = &arg1[7]
int32_t r14 = 0
int32_t rcx = rax_1 - 1

if (rax_1 == 0)
    rcx = 0

int64_t rcx_2 = sx.q(sub_1405969c0(rcx, rdx)) & sx.q(arg1[9].d - 1)
void* rax_6 = r15

if (rbx != 0)
    rax_6 = rbx

void* rsi = rax_6 + (rcx_2 << 2)
int32_t i = *(rax_6 + (rcx_2 << 2))

while (i != 0xffffffff)
    int64_t rcx_3 = sx.q(i) * 9
    int64_t rax_8 = *arg1
    void* rbx_1 = rax_8 + (rcx_3 << 3)
    
    if ((**(rax_8 + (rcx_3 << 3)))(rbx_1, arg2) != 0)
        int64_t rbx_2 = sx.q(*rsi)
        
        if (arg1[1].d != *(arg1 + 0x34))
            int64_t rcx_5 = rbx_2 * 9
            int64_t r8_1 = *arg1
            void* rcx_6 = *(r15 + 8)
            int64_t rdx_3 = sx.q(*(r8_1 + (rcx_5 << 3) + 0x44)) & sx.q(arg1[9].d - 1)
            
            if (rcx_6 != 0)
                r15 = rcx_6
            
            int32_t j = *(r15 + (rdx_3 << 2))
            void* rcx_7 = r15 + (rdx_3 << 2)
            
            while (j != 0xffffffff)
                if (j == rbx_2.d)
                    *rcx_7 = *(r8_1 + (rcx_5 << 3) + 0x40)
                    break
                
                int64_t j_1 = sx.q(j)
                j = *(r8_1 + ((j_1 * 9 + 8) << 3))
                rcx_7 = r8_1 + ((j_1 * 9 + 8) << 3)
        
        sub_14091b210(*arg1 + rbx_2 * 0x48)
        r14 = 1
        sub_1407c2d20(arg1, rbx_2.d, 1)
        break
    
    i = *(rbx_1 + 0x40)
    rsi = rbx_1 + 0x40

return zx.q(r14)
