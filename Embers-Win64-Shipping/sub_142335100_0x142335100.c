// 函数: sub_142335100
// 地址: 0x142335100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
char rax_2

if (*(data_143f5b298 + 0xaf8) != 0)
    rax_2 = (*(*arg1 + 0x198))()

uint64_t rbx
int64_t r12
int64_t* r15
int64_t* rcx_1

if (*(data_143f5b298 + 0xaf8) == 0 || rax_2 == 0)
    rbx.b = 0
label_142335169:
    r12.b = 0
    
    if (rbx.b == 0)
        r15 = nullptr
    else
        rcx_1 = *(data_143f5b298 + 0xaf8)
        r15 = (*(*rcx_1 + 0xb8))(rcx_1)
else
    rbx.b = 1
    int64_t* rcx = *(data_143f5b298 + 0xaf8)
    
    if ((*(*rcx + 8))(rcx) == 0)
        goto label_142335169
    
    r12 = 1
    rcx_1 = *(data_143f5b298 + 0xaf8)
    r15 = (*(*rcx_1 + 0xb8))(rcx_1)
int64_t rcx_2 = sx.q(arg1[0x5f].d)
*(arg1 + 0x2f4) = rcx_2.d
arg1[0x5f].d = mods.dp.d(sx.q((rcx_2 + 1).d), arg1[0x57].d)
void* rdx_2 = *(arg1[0x58] + (rcx_2 << 3))

if (rdx_2 != 0)
    arg3 = sub_1405d16e0(&arg1[1], rdx_2)

int32_t var_a8
int32_t var_a0

if (rbx.b != 0)
    if (r15 == 0)
        rbx.b = 0
    else
        rbx = zx.q((**r15)(r15))
    
    if (rbx.b != arg1[0x50].b)
    label_1423351f9:
        var_a0 = 0
        arg1[0x50].b = rbx.b
        var_a8 = *(arg1 + 0xb4)
        (*(*arg1 + 0x1a8))(arg1, 0, zx.q(arg1[0x15].d), zx.q(*(arg1 + 0xac)), var_a8, 0)
    else if (rbx.b != 0 && (*(*r15 + 0x18))(r15, arg1) != 0)
        goto label_1423351f9

int64_t* rbx_1 = arg1[6]
sub_142338a70(arg1[0x47], rbx_1, (*(*rbx_1 + 0x30))(rbx_1), arg3)

if (arg1[0x13] == 0 && ((*(arg1 + 0x27f) == 0 && arg1[0x50].b == 0) || r12.b != 0))
    int64_t* rcx_9 = data_143e29f28
    int64_t* rdi_1 = rcx_9[4]
    
    if (arg1[0x49] != 0)
        int64_t* rbx_2 = arg1[0x4a]
        
        if (rbx_2 != 0)
            int32_t rax_19 = rbx_2[1].d
            
            if (rax_19 s> 0)
                if (rbx_2 != 0)
                    if (rax_19 != 0)
                        rbx_2[1].d = rax_19 + 1
                        rax_19.b = 1
                    
                    if (rax_19.b == 0)
                        rbx_2 = nullptr
                
                int64_t rax_20 = 0
                
                if (rbx_2 != 0)
                    rax_20 = arg1[0x49]
                
                int64_t var_78 = rax_20
                int64_t* var_70_1 = rbx_2
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                int64_t var_68
                (*(*rcx_9 + 0x28))(rcx_9, &var_68, &var_78)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp10_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                int64_t rdx_6 = var_68
                
                if (rdx_6 != 0)
                    void** rax_25 = (*(*rdi_1 + 0xa0))(rdi_1, rdx_6)
                    
                    if (rax_25 != 0)
                        sub_1405d16e0(&arg1[0x13], *rax_25)
                
                int64_t* var_60
                
                if (var_60 != 0)
                    var_60[1].d -= 1
                    
                    if (var_60[1].d == 1)
                        (**var_60)(var_60)
                        int32_t temp13_1 = *(var_60 + 0xc)
                        *(var_60 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*var_60 + 8))(var_60, 1)

void* rax_29 = arg1[1]
void* const var_90 = rax_29

if (rax_29 != 0)
    *(rax_29 + 8) += 1

if (sub_140a80f40() == 0)
    uint32_t rax_32
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_32.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_32.b == 0))
        void var_58
        void** rax_34 = sub_142333000(&var_58, nullptr, 0xff)
        void* rdx_10 = *rax_34
        *(rdx_10 + 0x10) = &arg1[-1]
        *(rdx_10 + 0x18) = var_90
        var_90 = nullptr
        void* rcx_22 = *rax_34
        int32_t r8_4 = rax_34[2].d
        int64_t* rdx_11 = rax_34[1]
        int64_t* rbx_4 = *(rcx_22 + 0x28)
        int64_t* arg_18 = rbx_4
        int32_t* rdi_2 = &rbx_4[9]
        
        if (rbx_4 != 0)
            *rdi_2 += 1
            rbx_4 = arg_18
        
        sub_1405e48c0(rcx_22, rdx_11, r8_4, 1)
        
        if (rbx_4 != 0)
            int32_t rax_35 = *rdi_2
            *rdi_2 -= 1
            
            if (rax_35 == 1)
                sub_140a2f6e0(arg_18)
    else
        int128_t var_88 = (&arg1[-1]).o
        var_90 = nullptr
        int64_t* rcx_17 = var_88.q
        (*(*rcx_17 + 0x10))(rcx_17, &var_88:8)
        sub_1405d1550(&var_88:8)
else
    (*(arg1[-1] + 0x10))(&arg1[-1], &var_90)

sub_1405d1550(&var_90)
int64_t result
int64_t rdx_13
result, rdx_13 = sub_1423db540(arg1, zx.q(arg2))

if (r15 != 0 && arg2 != 0)
    int64_t* rbx_6 = arg1[0x4a]
    int64_t* rax_36 = rbx_6
    
    if (rbx_6 != 0)
        int32_t rax_37 = rbx_6[1].d
        
        if (rax_37 == 0)
            rbx_6 = nullptr
            rax_36 = nullptr
        else
            rbx_6[1].d = rax_37 + 1
            rax_36 = rbx_6
    
    if (rax_36 != 0)
        r14 = arg1[0x49]
    
    if (*(arg1 + 0x27f) != 0 || arg1[0x50].b != 0)
        rdx_13.b = 1
    else
        rdx_13.b = 0
    
    result = (*(*r15 + 8))(r15, rdx_13, arg1, r14, var_a8, var_a0, &arg1[-1])
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            result = (**rbx_6)(rbx_6)
            int32_t temp11_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp11_1 == 1)
                return (*(*rbx_6 + 8))(rbx_6, 1)

return result
