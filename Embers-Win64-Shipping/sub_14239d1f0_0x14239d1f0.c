// 函数: sub_14239d1f0
// 地址: 0x14239d1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
char r12 = arg3
int128_t zmm6 = arg2

if (arg1[2].b != 0)
    return 2

int64_t* rbx = arg1[1]
int64_t rdi = 0
int64_t* var_70 = nullptr
int32_t var_64 = 0

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdi = *arg_8

int32_t i_2 = 1
sub_1405a4f90(&var_70)
int64_t* r13 = var_70
*r13 = rdi
r13[1] = rbx

if (rbx != 0)
    int32_t rax_4 = rbx[1].d
    rbx[1].d = rax_4
    
    if (rax_4 == 0)
        (**rbx)(rbx)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t i_1 = i_2
int32_t arg_20 = 0
int32_t rbp = 0
int64_t (* var_60)(int64_t* arg1)

if (i_1 s> 0)
    int64_t* rsi_1 = nullptr
    int64_t* var_78_1 = nullptr
    
    do
        int64_t* r15_1 = *(rsi_1 + r13 + 8)
        int64_t* rbx_1 = *(rsi_1 + r13)
        
        if (r15_1 != 0)
            r15_1[1].d += 1
        
        if (r12 != 0 && *(rbx_1 + 0x13) != 0 && *(rbx_1 + 0x12) == 0 && *(rbx_1 + 0x11) == 0)
            *(rbx_1 + 0x13) = 0
            int64_t (* rdx_1)(int64_t* arg1) = nullptr
            void* const rcx_3 = rbx_1[1]
            
            if (rcx_3 != 0)
                int32_t rax_7 = *(rcx_3 + 8)
                
                if (rax_7 == 0)
                    rcx_3 = nullptr
                else
                    *(rcx_3 + 8) = rax_7 + 1
                    
                    if (rcx_3 != 0)
                        rdx_1 = *rbx_1
            
            var_60 = rdx_1
            void* const var_58_1 = rcx_3
            arg2, zmm6 = sub_142398740(rbx_1[0x13], &var_60, arg2)
        
        int64_t* rdi_1 = rbx_1[0xf]
        void* r12_3 = &rdi_1[sx.q(rbx_1[0x10].d) * 2]
        
        if (rdi_1 != r12_3)
            do
                int64_t rbp_1 = *rdi_1
                
                if (rbp_1 != 0)
                    int64_t* rbx_2 = rdi_1[1]
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                    
                    int64_t i_3 = sx.q(i_1)
                    i_1 = (i_3 + 1).d
                    
                    if (i_1 s> var_64)
                        sub_1405a4f90(&var_70)
                        r13 = var_70
                    
                    int64_t rax_10 = i_3 * 2
                    r13[rax_10] = rbp_1
                    r13[rax_10 + 1] = rbx_2
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                (**rbx_2)(rbx_2)
                                int32_t temp7_1 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_1 = &rdi_1[2]
            while (rdi_1 != r12_3)
            
            rsi_1 = var_78_1
            rbp = arg_20
        
        if (r15_1 != 0)
            r15_1[1].d -= 1
            
            if (r15_1[1].d == 1)
                (**r15_1)(r15_1)
                int32_t temp5_1 = *(r15_1 + 0xc)
                *(r15_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*r15_1 + 8))(r15_1, 1)
        
        r12 = arg3
        rbp += 1
        rsi_1 = &rsi_1[2]
        arg_20 = rbp
        var_78_1 = rsi_1
    while (rbp s< i_1)

arg_8 = arg_8
void** var_58_2 = &arg_8
var_60 = sub_142385be0
int32_t rax_16 = sub_140bcd590(&var_60, zmm6)

if (i_1 != 0)
    void* rdi_2 = &r13[1]
    int32_t i
    
    do
        int64_t* rbx_3 = *rdi_2
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp3_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        rdi_2 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r13 != 0)
    sub_140a74f90(r13)

return zx.q(rax_16)
