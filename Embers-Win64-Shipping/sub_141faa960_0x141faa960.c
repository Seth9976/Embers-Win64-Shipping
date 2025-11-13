// 函数: sub_141faa960
// 地址: 0x141faa960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0xcf0)
int64_t rbp = 0
int32_t r14 = 0

for (void* r15 = &i[sx.q(*(arg1 + 0xcf8))]; i != r15; i = &i[1])
    void* rsi_1 = *i
    
    if (rsi_1 != 0)
        int64_t* rbx_1 = *(rsi_1 + 0x418)
        
        if (rbx_1 != 0)
            void* rax_1 = sub_1424929c0()
            void* rcx = rbx_1[2]
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
                r14 += 1
                
                if (arg2 == 0)
                    rbx_1[0x13] = 0
                
                sub_14213f9e0(rbx_1)
                (*(*rbx_1 + 0x2d8))(rbx_1)
                *(rsi_1 + 0x418) = 0

int64_t var_28 = 0
wchar16 const* const rdi = u"without"
int32_t rcx_3 = 0

if (arg2 != 0)
    rdi = u"with"

int32_t rdx_1 = 0
int32_t var_1c = 0
int32_t var_20 = 0

if (*rdi != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (rdi[rbx_2] != 0)
    
    if (rbx_2.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_2.d + 1)
        rcx_3 = var_1c
        rdx_1 = var_20
        rbp = var_28
    
    int32_t rax_5 = rbx_2.d + 1 + rdx_1
    int32_t var_20_1 = rax_5
    
    if (rax_5 s> rcx_3)
        sub_140594770(&var_28)
        rbp = var_28
    
    UnDecorator::getReferenceType(rbp, rdi, (rbx_2.d + 1) * 2)
    
    if (rbp != 0)
        sub_140a74f90(rbp)

return zx.q(r14)
