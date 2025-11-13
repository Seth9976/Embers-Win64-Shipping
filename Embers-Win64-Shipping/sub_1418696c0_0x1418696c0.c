// 函数: sub_1418696c0
// 地址: 0x1418696c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[6]
int32_t* var_e8 = nullptr
int64_t* var_e0 = rdx

if (rdx == 0)
label_14186971b:
    
    if (var_e0 != 0)
        var_e8 = arg1[5]
else
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rdx[1].d)
        rdx[1].d = 0
        z_1 = true
    else
        rax_1 = rdx[1].d
        z_1 = false
    
    if (not(z_1))
        while (true)
            bool z_2
            
            if (rax_1 == rdx[1].d)
                rdx[1].d = rax_1 + 1
                z_2 = true
            else
                rdx[1].d
                z_2 = false
            
            if (z_2)
                break
            
            rax_1 = 0
            bool z_3
            
            if (0 == rdx[1].d)
                rdx[1].d = 0
                z_3 = true
            else
                rax_1 = rdx[1].d
                z_3 = false
            
            if (z_3)
                goto label_141869714
        
        goto label_14186971b
    
label_141869714:
    __builtin_memset(&var_e0, 0, 0x18)

int64_t rsi

if (var_e8 == 0)
    rsi.b = 0
else
    bool z_4
    
    if (0 == *var_e8)
        *var_e8 = 0
        z_4 = true
    else
        *var_e8
        z_4 = false
    
    if (z_4)
        rsi.b = 0
    else
        void* rcx_2 = arg1[4]
        bool z_5
        
        if (0 == *(rcx_2 + 0x10))
            *(rcx_2 + 0x10) = 0
            z_5 = true
        else
            *(rcx_2 + 0x10)
            z_5 = false
        
        if (not(z_5))
            rsi.b = 0
        else
            rsi.b = 1

void var_60
int64_t* rax_6 = sub_140596d10(&var_60, &arg1[2])
int32_t rbx = arg1[1].d
int64_t var_c0 = 0
int64_t var_b8 = 0
int64_t var_a8
sub_140a98020(&var_a8)

if (&var_c0 != rax_6)
    int64_t rcx_5 = var_c0
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    var_c0 = *rax_6
    *rax_6 = 0
    var_b8.d = rax_6[1].d
    var_b8:4.d = *(rax_6 + 0xc)
    rax_6[1] = 0

char var_b0 = 0
int32_t var_ac = 0xffffffff
int64_t rax_10 = _Query_perf_frequency()
var_a8 = rax_10
int64_t var_a0 = rax_10
int64_t var_98 = 0
int64_t rcx_6 = *rax_6

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t var_d8
int64_t var_d0

if (rsi.b != 0)
    int16_t* const r8_1
    
    if (arg1[3].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = arg1[2]
    
    int64_t* rcx_7 = *(*arg1 + 0x28)
    int64_t* arg_20
    (*(*rcx_7 + 0x48))(rcx_7, &arg_20, r8_1, 0)
    int64_t* rcx_8 = arg_20
    rsi.b = rcx_8 != 0
    
    if (rcx_8 != 0)
        int64_t rax_14 = (*(*rcx_8 + 0x28))()
        var_d0.d = rax_14.d
        
        if (rax_14.d s> 0)
            sub_1405daba0(&var_d8)
        
        rsi = 0
        
        if (rax_14 s> 0)
            do
                bool z_6
                
                if (0 == *var_e8)
                    *var_e8 = 0
                    z_6 = true
                else
                    *var_e8
                    z_6 = false
                
                if (z_6)
                    break
                
                void* rcx_11 = arg1[4]
                bool z_7
                
                if (0 == *(rcx_11 + 0x10))
                    *(rcx_11 + 0x10) = 0
                    z_7 = true
                else
                    *(rcx_11 + 0x10)
                    z_7 = false
                
                if (not(z_7))
                    break
                
                int64_t* rcx_12 = arg_20
                int64_t rbx_2 = rax_14 - rsi
                int64_t r9_1 = *rcx_12
                
                if (rbx_2 s>= 0x200000)
                    rbx_2 = 0x200000
                
                (*(r9_1 + 0x150))(rcx_12, var_d8 + rsi, rbx_2, r9_1)
                rsi += rbx_2
                sub_1418977e0(*arg1, arg1[1].d, rsi.d)
            while (rsi s< rax_14)
        
        int64_t* rcx_14 = arg_20
        var_98 = rsi
        
        if ((*(*rcx_14 + 0x1b8))(rcx_14) == 0 || rsi != rax_14)
            rsi.b = 0
        else
            rsi.b = 1
    
    int64_t var_a0_1 = _Query_perf_frequency()
    var_b0 = rsi.b
    int32_t rax_20 = 0x194
    
    if (rsi.b != 0)
        rax_20 = 0xc8
    
    int64_t* rcx_15 = arg_20
    var_ac = rax_20
    
    if (rcx_15 != 0)
        (**rcx_15)(rcx_15, 1)

int32_t rax_22 = arg1[1].d
void* rdi_1 = *arg1
int64_t r14_2 = var_d8
int64_t r13 = r14_2
int64_t var_80 = r14_2
int32_t arg_10 = rax_22
EnterCriticalSection(rdi_1 + 0x2c0)
void*** rax_23 = j_sub_140a82f30(0x58)
void*** r15 = rax_23

if (rax_23 == 0)
    r15 = nullptr
else
    *r15 = &data_142fe7fc0
    r13 = 0
    r15[1].d = rbx
    r15[2] = 0
    r15[2] = var_c0
    var_c0 = 0
    r15[3].d = var_b8.d
    *(r15 + 0x1c) = var_b8:4.d
    int64_t var_b8_1 = 0
    r15[4].b = var_b0
    *(r15 + 0x24) = var_ac
    int64_t var_80_1 = 0
    *(r15 + 0x28) = var_a8.o
    r15[7] = var_98
    *r15 = &data_142fe8010
    r15[8] = r14_2
    r15[9].d = var_d0.d
    *(r15 + 0x4c) = var_d0:4.d
    r15[0xa].b = rsi.b

void*** rax_32 = j_sub_140a82f30(0x18)
void*** r14_3 = rax_32

if (rax_32 == 0)
    r14_3 = nullptr
else
    rax_32[1].d = 1
    *(rax_32 + 0xc) = 1
    *r14_3 = &data_142d42ea8
    r14_3[2] = r15

void*** var_68 = r14_3
int32_t var_90
sub_140a696e0(rdi_1 + 0x2e8, &var_90)
int32_t* var_88
*var_88 = rax_22
*(var_88 + 8) = r15
*(var_88 + 0x10) = r14_3
int32_t rax_34 = var_90
var_88[6] = 0xffffffff
void arg_18
int32_t result = sub_14187da60(rdi_1 + 0x2e8, &arg_18, *var_88, var_88, rax_34, nullptr)

if (rdi_1 != -0x2c0)
    result = LeaveCriticalSection(rdi_1 + 0x2c0)

if (r13 != 0)
    result = sub_140a74f90(r13)

int64_t rcx_22 = var_c0

if (rcx_22 != 0)
    result = sub_140a74f90(rcx_22)

int64_t* rcx_23 = var_e0

if (rcx_23 != 0)
    result = rcx_23[1].d
    rcx_23[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_4 = var_e0
        result = (**rbx_4)(rbx_4)
        int32_t r12_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (r12_1 == 1)
            int64_t* rcx_25 = var_e0
            return (*(*rcx_25 + 8))(rcx_25, zx.q(r12_1))

return result
