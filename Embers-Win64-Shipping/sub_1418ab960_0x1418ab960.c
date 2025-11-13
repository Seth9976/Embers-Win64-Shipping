// 函数: sub_1418ab960
// 地址: 0x1418ab960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rdx = *(arg2 + 8)
int64_t* var_78 = nullptr
int64_t var_70 = 0
int32_t rdx_1 = rdx - *(arg2 + 0x34)

if (rdx_1 s> 0)
    sub_14061cd70(&var_78, rdx_1)

int32_t r9 = *(arg2 + 0x28)
void* r8 = arg2 + 0x10
int32_t var_68 = 0
int32_t rcx_1 = 0
int32_t var_64 = 1
void* var_60 = r8
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r9 != 0)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_4 = *r8
    
    if (rdx_4 != 0)
    label_1418aba16:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r9)
            var_54.d = r9
    else
        while (true)
            int64_t rdx_5 = sx.q(rbx)
            rcx_1 += 0x20
            rbx += 1
            var_54:4.d = rcx_1
            var_68 = rbx
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8 + (rdx_5 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1418aba16
        
        var_54.d = r9

int128_t var_28 = 0xffffffff
double var_38[0x2] = var_68.o
var_68.o = arg2.o
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r9)
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t rbx_1 = sx.q(var_70.d)
        int64_t rsi_1 = *var_68.q
        int32_t rax_12 = (rbx_1 + 1).d
        var_70.d = rax_12
        
        if (rax_12 s> var_70:4.d)
            sub_1405a4f90(&var_78)
        
        sub_140596d10(&var_78[rbx_1 * 2], rsi_1 + sx.q(i) * 0x18)
        int32_t var_5c
        var_54:4.d &= not.d(var_5c)
        sub_14059bdd0(&var_60)
        i = i_2
    while (i s< *(var_58.q + 0x18))

int64_t* result = sub_140b002f0(data_143ddb400, Portal.BuildPatch", InstalledPrereqs"
    , &var_78, arg1)
int32_t i_3 = var_70.d
int64_t* rbx_2 = var_78

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_10 = *rbx_2
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_78

if (rbx_2 != 0)
    result = sub_140a74f90(rbx_2)

if (arg3 == 0)
    return result

return sub_140af04f0(data_143ddb400, 0, arg1)
