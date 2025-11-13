// 函数: sub_1407ebce0
// 地址: 0x1407ebce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
void* var_58 = arg1
void** rdx = *(arg1 + 0x10)
int32_t* var_50 = nullptr
int32_t rsi = arg3
int32_t var_48 = 0
sub_1407e5020(&var_50, rdx)
int32_t rdx_1 = *(arg1 + 0xb0)

if (rsi == 0xffffffff)
    rsi = rdx_1 - arg2
    arg_18 = rsi

int32_t rbx_1 = 0
int64_t* var_88 = nullptr
int32_t r13 = 0
int64_t var_80 = 0
int64_t* r12 = nullptr
int32_t i_1 = 0

if (rdx_1 s> 0)
    sub_14061cd70(&var_88, rdx_1)
    i_1 = var_80.d
    r12 = var_88

int32_t r15 = arg2

while (true)
    void* rax_1 = var_58
    
    if (rax_1 == 0)
        break
    
    if (r15 u>= *(rax_1 + 0xb0))
        break
    
    if (r13 s>= rsi)
        break
    
    sub_1407eeb70(&var_58)
    int64_t var_a8 = 0
    int32_t var_a0_1 = 0
    sub_1405947f0(&var_a8, 3)
    int32_t rax_2 = var_a0_1 + 3
    
    if (rax_2 s> 0)
        sub_140594770(&var_a8)
    
    UnDecorator::getReferenceType(var_a8, &data_142dd1078, 6)
    int32_t* rax_4 = var_50
    int32_t* rbx_2 = rax_4
    void* rsi_2 = &rax_4[sx.q(var_48) * 0xa]
    
    if (rax_4 != rsi_2)
        do
            int64_t var_38
            int64_t* rax_5 = sub_140b63b70(rbx_2, &var_38)
            int64_t rcx_8 = *rax_5
            int32_t rdx_4 = rax_5[1].d
            int32_t rdx_5 = neg.d(rdx_4)
            *rax_5 = 0
            int32_t r8 = rax_5[1].d
            int64_t var_78 = rcx_8
            int32_t rcx_9 = *(rax_5 + 0xc)
            int32_t rdx_8 = sbb.d(rdx_5, rdx_5, rdx_4 != 0) + 2 + r8
            rax_5[1] = 0
            
            if (rdx_8 s> rcx_9)
                sub_1405947f0(&var_78, rdx_8)
            
            sub_140a20ba0(&var_78, &data_142dc30a4, 1)
            int64_t rcx_12 = var_38
            int64_t var_98 = var_78
            int32_t var_70_1
            var_70_1.q = 0
            var_78 = 0
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            int32_t* rdx_9 = *(rbx_2 + 0x18)
            int64_t var_b8
            int64_t* rcx_13 = &var_b8
            int32_t var_b0
            
            if (rdx_9 != 0)
                sub_140779130(rcx_13, rdx_9, *(rbx_2 + 8))
            else
                var_b8 = 0
                var_b0 = 0
                sub_1405947f0(rcx_13, 7)
                int32_t rax_9 = var_b0 + 7
                var_b0 = rax_9
                
                if (rax_9 s> 0)
                    sub_140594770(&var_b8)
                
                UnDecorator::getReferenceType(var_b8, u"(null)", 0xe)
            
            int32_t r8_2 = var_b0 - 1
            
            if (var_b0 == 0)
                r8_2 = 0
            
            sub_140a20ba0(&var_98, var_b8, r8_2)
            int64_t rcx_17 = var_b8
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            int32_t rcx_19 = sub_140a20ba0(&var_98, &data_142da76f4, 1)
            int64_t var_68 = var_98
            int32_t rdx_13 = r8 + sbb.d(rcx_19, rcx_19, r8 != 0) + 4
            var_98 = 0
            int32_t var_5c_1 = rcx_9
            int32_t var_90_1
            var_90_1.q = 0
            
            if (rdx_13 s> rcx_9)
                sub_1405947f0(&var_68, rdx_13)
            
            sub_140a20ba0(&var_68, &data_142dd1080, 3)
            int64_t rdi_1 = var_68
            var_68 = 0
            int32_t var_60_1
            var_60_1.q = 0
            int32_t r8_3 = r8 - 1
            
            if (r8 == 0)
                r8_3 = 0
            
            sub_140a20ba0(&var_a8, rdi_1, r8_3)
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
            
            int64_t rcx_26 = var_98
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            rbx_2 = &rbx_2[0xa]
        while (rbx_2 != rsi_2)
        
        r12 = var_88
    
    int64_t i_2 = sx.q(i_1)
    i_1 = (i_2 + 1).d
    var_80.d = i_1
    
    if (i_1 s> var_80:4.d)
        sub_1405a4f90(&var_88)
        i_1 = var_80.d
        r12 = var_88
    
    int64_t* rbx_4 = &r12[i_2 * 2]
    *rbx_4 = 0
    int64_t rsi_3 = var_a8
    rbx_4[1].d = rax_2
    
    if (rax_2 != 0)
        sub_1405a4c70(rbx_4, rax_2, 0)
        memcpy(*rbx_4, rsi_3, rax_2 * 2)
    else
        *(rbx_4 + 0xc) = 0
    
    int64_t rcx_30 = var_a8
    r15 += 1
    rsi = arg_18
    r13 += 1
    int32_t var_40_1 = r15
    rbx_1 = 0
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)

TEB* gsbase

if (data_143ce3720 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce3720)
    
    if (data_143ce3720 == 0xffffffff)
        atexit(sub_142cb38f0)
        _Init_thread_footer(&data_143ce3720)

int32_t rdx_18 = data_143ce3718

if (rdx_18 == 0 || rdx_18 == 1)
    int64_t rdi_3 = 0x32
    
    while (true)
        if (rdx_18 s> 0)
            rbx_1 = rdx_18 - 1
        
        int32_t rax_18
        rax_18.b = rdx_18 s<= 0
        int32_t rax_20 = rax_18 + 1 + rdx_18
        bool cond:0_1 = rax_20 s<= data_143ce371c
        data_143ce3718 = rax_20
        
        if (not(cond:0_1))
            sub_140594770(&data_143ce3710)
        
        int64_t rcx_33 = sx.q(rbx_1)
        rbx_1 = 0
        *(data_143ce3710 + (rcx_33 << 1)) = 0x3d
        *(data_143ce3710 + (rcx_33 << 1) + 2) = 0
        int64_t temp0_1 = rdi_3
        rdi_3 -= 1
        
        if (temp0_1 == 1)
            break
        
        rdx_18 = data_143ce3718

int64_t* rbx_5 = r12

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_34 = *rbx_5
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        rbx_5 = &rbx_5[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r12 != 0)
    sub_140a74f90(r12)

return sub_140745ac0(&var_50)
