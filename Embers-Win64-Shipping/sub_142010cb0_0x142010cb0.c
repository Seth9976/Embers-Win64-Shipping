// 函数: sub_142010cb0
// 地址: 0x142010cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = nullptr
int32_t rdi = 0
int64_t var_28
uint64_t rax
int64_t* rbx_1
int64_t r15

if (*(arg1 + 0xdf0) == 0)
    rbx_1 = 0.q
    r15.b = 0
else
    rbx_1 = *(arg1 + 0xdf8)
    
    if (rbx_1 == 0)
        rbx_1 = 0.q
        r15.b = 0
    else
        rax = zx.q(rbx_1[1].d)
        
        if (rax.d s<= 0)
            rbx_1 = 0.q
            r15.b = 0
        else
            void* r8 = nullptr
            
            if (rbx_1 == 0)
                goto label_142010cfc
            
            if (rax.d == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = rax.d + 1
            label_142010cfc:
                
                if (rbx_1 != 0)
                    r8 = *(arg1 + 0xdf0)
            
            rax, arg3 = sub_140e12aa0(r8, &var_28, arg2)
            int64_t rcx_2 = *(arg1 + 0xe10)
            
            if (rcx_2 == 0 || rcx_2 != *rax)
                r15.b = 1
                rdi = 3
            else
                rdi = 3
                r15.b = 0

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            rax, arg3 = (**var_20)(var_20)
            int32_t temp2_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp2_1 == 1)
                rax, arg3 = (*(*var_20 + 8))(var_20, 1)

if ((rdi.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        rax, arg3 = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            rax, arg3 = (*(*rbx_1 + 8))(rbx_1, 1)

if (r15.b == 0)
    return 

if (*(arg1 + 0xe10) == 0)
    sub_141ffea40(arg1, *(arg1 + 0x788), arg3)

int64_t* rbx_2 = *(arg1 + 0xe18)
int64_t r14_2 = *(arg1 + 0xe10)

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t* rdi_1 = *(arg1 + 0xdf8)

if (rdi_1 != 0)
    int32_t rax_6 = rdi_1[1].d
    
    if (rax_6 == 0)
        rdi_1 = nullptr
    else
        rdi_1[1].d = rax_6 + 1
        
        if (rdi_1 != 0)
            rbp = *(arg1 + 0xdf0)

var_28 = r14_2
int64_t* var_20_1 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

uint128_t zmm0_2 = sub_140e258a0(rbp, sub_140e23de0(rbp, &var_28))
int64_t* rcx_10 = *(arg1 + 0xe00)

if (rcx_10 != 0)
    (*(*rcx_10 + 8))(rcx_10, zx.q(data_143a30330), zx.q(data_143a30334), zx.q(data_143a30338))

var_28 = r14_2
int64_t* var_20_2 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

uint128_t zmm0_3
rax, zmm0_3 = sub_140e83c40(data_143e29f28, &var_28, zmm0_2)
int64_t* rcx_12 = data_143e29f28

if (rcx_12 != 0)
    sub_140e88700(rcx_12, 2, zmm0_3)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp6_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp7_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp7_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
