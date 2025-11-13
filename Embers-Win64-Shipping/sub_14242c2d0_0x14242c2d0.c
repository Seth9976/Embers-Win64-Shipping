// 函数: sub_14242c2d0
// 地址: 0x14242c2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x198))
int32_t rbx = 0
int32_t r10 = 0
int32_t r12 = -1

if (rax.d s> 0)
    int64_t r9_1 = 0
    int64_t* rax_1 = *(arg1 + 0x190)
    
    do
        void* rcx = *rax_1
        
        if (rcx != 0 && *(rcx + 0x30) == arg2)
            r12 = r10
            break
        
        r10 += 1
        r9_1 += 1
        rax_1 = &rax_1[1]
    while (r9_1 s< rax)

void* rax_2 = sub_140cde0b0()
sub_140d19010(rax_2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* rax_4 = sub_140d2dfc0(sub_142545fe0(), rax_2, 0, 0, 0, 0, 0, 0, 0)
sub_142155530(rax_4, arg2, arg1)

if (r12 == 0xffffffff)
    int64_t rdi_1 = sx.q(*(arg1 + 0x198))
    int32_t rax_5 = (rdi_1 + 1).d
    *(arg1 + 0x198) = rax_5
    
    if (rax_5 s> *(arg1 + 0x19c))
        sub_1405a4d70(arg1 + 0x190)
    
    *(*(arg1 + 0x190) + (rdi_1 << 3)) = rax_4
else
    *(*(arg1 + 0x190) + (sx.q(r12) << 3)) = rax_4

int64_t rdx_2
rdx_2.b = 1
uint64_t result = sub_142158140(rax_4, rdx_2.b)

if (arg3 != 0)
    int64_t* rcx_7 = *(arg1 + 0x1b0)
    
    if (rcx_7 != 0)
        int32_t rdx_4 = 0
        int64_t var_38 = 0
        int32_t rdi_2 = 0
        int64_t var_30_1 = 0
        
        if (*(arg1 + 0x198) s> 0)
            int64_t* rsi_1 = nullptr
            
            while (true)
                int64_t r15_1 = *(*(rsi_1 + *(arg1 + 0x190)) + 0xe0)
                var_30_1.d = rbx + 1
                
                if (rbx + 1 s> rdx_4)
                    sub_1405a4d70(&var_38)
                
                rdi_2 += 1
                rsi_1 = &rsi_1[1]
                *(var_38 + (sx.q(rbx) << 3)) = r15_1
                
                if (rdi_2 s>= *(arg1 + 0x198))
                    break
                
                rdx_4 = var_30_1:4.d
                rbx = var_30_1.d
            
            rcx_7 = *(arg1 + 0x1b0)
        
        result = (*(*rcx_7 + 0x280))(rcx_7, &var_38)
        int64_t rcx_11 = var_38
        
        if (rcx_11 != 0)
            return sub_140a74f90(rcx_11)

return result
