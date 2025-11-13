// 函数: sub_14232cbc0
// 地址: 0x14232cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rcx = arg1[1]
void* var_78 = rcx
int64_t* rax_2 = arg1[2]
int64_t* var_70 = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1

void* rax_3 = *arg1
int64_t* rbx = *(rax_3 + 0x20)

if (rbx != 0)
    rbx[1].d += 1

int64_t r14

if (*(rax_3 + 0x18) == 0 || rcx == 0)
    r14.b = 0
else
    r14.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_6 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rbx + 8))(rbx, 1)

if (r14.b != 0)
    int64_t* rcx_4 = *arg1 + 0x18
    int64_t* var_50 = nullptr
    int64_t var_58
    
    if (rcx_4 != &var_58)
        *rcx_4 = 0
        var_58 = 0
        sub_1405aeff0(&rcx_4[1], &var_50)
        int64_t* rcx_6 = var_50
        
        if (rcx_6 != 0)
            rcx_6[1].d -= 1
            
            if (rcx_6[1].d == 1)
                int64_t* rbx_1 = var_50
                (**rbx_1)(rbx_1)
                int32_t rax_10 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_10 == 1)
                    int64_t* rcx_8 = var_50
                    (*(*rcx_8 + 8))(rcx_8, 1)

if (var_78 == 0)
    void* rax_12 = *arg1
    int64_t* rcx_9 = *(rax_12 + 0x20)
    void* rdx_2 = *(rax_12 + 0x18)
    int64_t* var_40 = rcx_9
    
    if (rcx_9 != 0)
        rcx_9[1].d += 1
    
    var_78 = rdx_2
    int64_t var_48_1 = 0
    sub_1405aeff0(&var_70, &var_40)
    int64_t* rcx_11 = var_40
    
    if (rcx_11 != 0)
        rcx_11[1].d -= 1
        
        if (rcx_11[1].d == 1)
            int64_t* rbx_2 = var_40
            (**rbx_2)(rbx_2)
            int32_t rax_15 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_15 == 1)
                int64_t* rcx_13 = var_40
                (*(*rcx_13 + 8))(rcx_13, 1)

void* r8 = *arg1
void* rcx_14 = *(r8 + 0x28)
int64_t var_68

if (*(var_78 + 0x95) == 0)
    *(rcx_14 + 0x10) = arg1[3].d
    *(rcx_14 + 0x14) = *(arg1 + 0x1c)
    *(rcx_14 + 0x18) = arg1[4].d
    *(rcx_14 + 0x1c) = *(arg1 + 0x24)
else
    int64_t rdx_5 = *(var_78 + 0x98)
    *(rcx_14 + 0x14) = 0
    *(rcx_14 + 0x10) = 0
    *(rcx_14 + 0x18) = rdx_5.d
    *(rcx_14 + 0x1c) = (rdx_5 u>> 0x20).d
    var_68 = 0

int64_t* rcx_15 = var_70
void* result = r8 + 0x18
int128_t zmm1 = var_78.o
var_68.o = zmm1

if (rcx_15 != 0)
    rcx_15[1].d += 1
    zmm1 = var_68.o

if (&var_68 != result)
    int128_t var_38_1 = zmm1
    var_68.o = *result
    *result = zmm1

int64_t* var_60

if (var_60 != 0)
    result = zx.q(var_60[1].d)
    var_60[1].d -= 1
    
    if (result.d == 1)
        (**var_60)(var_60)
        result = zx.q(*(var_60 + 0xc))
        *(var_60 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*var_60 + 8))(var_60, 1)

int64_t* rcx_19 = var_70

if (rcx_19 != 0)
    result = zx.q(rcx_19[1].d)
    rcx_19[1].d -= 1
    
    if (result.d == 1)
        int64_t* rbx_4 = var_70
        result = (**rbx_4)(rbx_4)
        int32_t rdi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_21 = var_70
            result = (*(*rcx_21 + 8))(rcx_21, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_98)
return result
