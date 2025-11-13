// 函数: sub_140dba750
// 地址: 0x140dba750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rbp = arg2[1].d
int16_t* rcx

if (rbp == 0)
    rcx = &data_142d40450
else
    rcx = *arg2

void* r15 = &arg1[7]
void* rbx = *(r15 + 8)
int64_t r12_1 = sx.q(arg1[9].d) - 1
int32_t r14 = 0
void* rax_2 = r15
int64_t rcx_2 = sx.q(sub_140a5ff80(rcx, 0)) & r12_1

if (rbx != 0)
    rax_2 = rbx

int32_t i = *(rax_2 + (rcx_2 << 2))

if (i != 0xffffffff)
    void* rbx_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t r10_2 = i_1 * 2
        int64_t* rax_3 = *(rbx_1 + (r10_2 << 3))
        int16_t* const r9_1
        
        if (rbp == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *arg2
        
        int16_t* rax_4
        
        if (rax_3[1].d == 0)
            rax_4 = &data_142d40450
        else
            rax_4 = *rax_3
        
        void* r9_2 = r9_1 - rax_4
        uint32_t j
        uint32_t r8_1
        
        do
            r8_1 = zx.d(*rax_4)
            j = zx.d(*(rax_4 + r9_2))
            
            if (r8_1 != j)
                break
            
            rax_4 = &rax_4[1]
        while (j != 0)
        
        if (r8_1 - j == 0)
            void* rax_5 = *(r15 + 8)
            int64_t r9_4 = i_1 * 2
            int64_t rdx_1 = sx.q(*(rbx_1 + (r9_4 << 3) + 0xc)) & r12_1
            
            if (rax_5 != 0)
                r15 = rax_5
            
            int32_t j_1 = *(r15 + (rdx_1 << 2))
            void* r8_3 = r15 + (rdx_1 << 2)
            
            for (; j_1 != 0xffffffff; j_1 = *r8_3)
                if (j_1 == i)
                    *r8_3 = *(rbx_1 + (r9_4 << 3) + 8)
                    break
                
                r8_3 = rbx_1 + 8 + (sx.q(j_1) << 4)
            
            r14 = 1
            void* r9_5 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(*arg1 + sx.q(arg1[6].d) * 0x10) = i
            
            int32_t rax_10 = -1
            int32_t* r11_2 = (i_1 << 4) + *arg1
            *r11_2 = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_10 = arg1[6].d
            
            r11_2[1] = rax_10
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            void* rax_11 = *(r9_5 + 0x10)
            
            if (rax_11 != 0)
                r9_5 = rax_11
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(i)
            int64_t rcx_3 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
            *(r9_5 + (rcx_3 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = *(rbx_1 + (r10_2 << 3) + 8)
    while (i != 0xffffffff)

return zx.q(r14)
