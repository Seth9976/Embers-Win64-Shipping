// 函数: sub_142640cc0
// 地址: 0x142640cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142640930(arg1)
*arg1 = &data_143451460
arg1[0x44] = &data_143451bd0

if (((arg1[1].d u>> 4).b & 1) != 0)
    return arg1

void*** rax_2 = j_sub_140a82f30(0x60)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    __builtin_memset(&rax_2[1], 0, 0x20)
    *rdi = &data_143453e48
    InitializeCriticalSection(&rdi[5])
    SetCriticalSectionSpinCount(&rdi[5], 0xfa0)

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

void*** var_28 = rdi
void**** r15 = &rdi[1]
void*** var_20 = rbx

if (rdi == 0)
    r15 = nullptr

if (r15 != 0)
    if (*r15 == 0)
    label_142640dd9:
        
        if (rbx != 0)
            rbx[1].d += 1
        
        *r15 = rdi
        int64_t* rcx_3 = r15[1]
        
        if (rbx != rcx_3)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_3 = r15[1]
            
            if (rcx_3 != 0)
                int32_t rax_5 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
            
            r15[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_9 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*rbx)[1](rbx, 1)
    else
        void* rcx_2 = r15[1]
        
        if (rcx_2 == 0)
            goto label_142640dd9
        
        int32_t rax_4 = 0
        
        if (0 == *(rcx_2 + 8))
            *(rcx_2 + 8) = 0
        else
            rax_4 = *(rcx_2 + 8)
        
        if (rax_4 s<= 0)
            goto label_142640dd9

if (&arg1[0x5c] != &var_28)
    arg1[0x5c] = rdi
    var_28 = nullptr
    sub_1405aeff0(&arg1[0x5d], &var_20)

void*** rcx_7 = var_20

if (rcx_7 != 0)
    rcx_7[1].d -= 1
    
    if (rcx_7[1].d == 1)
        void*** rbx_1 = var_20
        (**rbx_1)(rbx_1)
        int32_t r14_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (r14_1 == 1)
            void*** rcx_9 = var_20
            (*rcx_9)[1](rcx_9, zx.q(r14_1))

return arg1
