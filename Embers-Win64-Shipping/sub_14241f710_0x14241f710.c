// 函数: sub_14241f710
// 地址: 0x14241f710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int32_t rdi = 0
int32_t arg_18 = 0

if (arg1[9].d s> 0)
    sub_140ca2400(arg1)

if (&arg1[8] != arg2)
    int64_t rbx_1 = sx.q(arg2[1].d)
    int64_t r14_1 = *arg2
    int32_t r8 = *(arg1 + 0x4c)
    arg1[9].d = rbx_1.d
    
    if (rbx_1.d != 0 || r8 != 0)
        sub_1405a4be0(&arg1[8], rbx_1.d, r8)
        memcpy(arg1[8], r14_1, (rbx_1 << 4).d)
    else
        *(arg1 + 0x4c) = 0

arg1[0xa].d = arg3
int16_t* var_70
int32_t rdx_3 = sub_140bdc6b0(arg1, &var_70)
int32_t r14_2 = 0
int16_t* rbx_4

while (true)
    uint64_t var_80
    uint64_t var_60
    uint64_t* rax_1
    int32_t var_68
    
    if (r14_2 != 0)
        rdi |= 2
        int16_t* const r8_5 = &data_142d40450
        
        if (var_68 != 0)
            r8_5 = var_70
        
        rdx_3 = sub_140a2e390(&var_60, u"%s_%d", r8_5)
        rax_1 = &var_60
    else
        rdi |= 1
        int16_t* r15_1 = var_70
        var_80 = 0
        int32_t var_78_1 = var_68
        
        if (var_68 != 0)
            sub_1405a4c70(&var_80, var_68, 0)
            rdx_3 = memcpy(var_80, r15_1, var_68 * 2)
            rax_1 = &var_80
        else
            int32_t var_74_1 = 0
            rax_1 = &var_80
    uint64_t r15_2 = *rax_1
    *rax_1 = 0
    int32_t rbx_3 = rax_1[1].d
    rax_1[1] = 0
    
    if ((rdi.b & 2) != 0)
        uint64_t rcx_6 = var_60
        rdi &= 0xfffffffd
        
        if (rcx_6 != 0)
            rdx_3 = sub_140a74f90(rcx_6)
    
    if ((rdi.b & 1) != 0)
        uint64_t rcx_7 = var_80
        rdi &= 0xfffffffe
        
        if (rcx_7 != 0)
            rdx_3 = sub_140a74f90(rcx_7)
    
    int16_t* var_90 = nullptr
    sub_1405a4c70(&var_90, sbb.d(rdx_3, rdx_3, rbx_3 != 0) + 5 + rbx_3, 0)
    memcpy(var_90, r15_2, rbx_3 * 2)
    sub_140a20ba0(&var_90, u"_MAX", 4)
    int16_t* const r8_8 = &data_142d40450
    rbx_4 = var_90
    var_90 = nullptr
    
    if (rbx_3 != 0)
        r8_8 = rbx_4
    
    int32_t var_88_1
    var_88_1.q = 0
    int64_t var_50
    int64_t* rax_6 = (*(*arg1 + 0x288))(arg1, &var_50, r8_8)
    int16_t* rdx_11
    
    if (rax_6[1].d == 0)
        rdx_11 = &data_142d40450
    else
        rdx_11 = *rax_6
    
    int16_t* arg_8
    sub_140b58260(&arg_8, rdx_11, 1)
    int64_t rcx_13 = var_50
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
    
    int64_t rax_7
    rax_7, rdx_3 = sub_140be0d00(arg1, arg_8, 0)
    
    if (rax_7 == -1)
        rbx_4 = arg_8
        
        if (data_1439a9aa8 == data_1439a9ad4)
            goto label_14241f992
        
        int32_t rax_10 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
        void* rcx_19 = data_1439a9ae0
        void* rax_12 = &data_1439a9ad8
        
        if (rcx_19 != 0)
            rax_12 = rcx_19
        
        int32_t rax_13 = *(rax_12 + ((sx.q(data_1439a9ae8 - 1) & sx.q(rax_10)) << 2))
        
        if (rax_13 == 0xffffffff)
        label_14241f987:
            rbx_4 = arg_8
        label_14241f992:
            
            if (arg2[1].d != 0)
                int64_t rax_15 = sub_140bdeca0(arg1)
                rbx_4 = arg_8
                rsi = rax_15 + 1
            
            int64_t rdi_1 = sx.q(arg1[9].d)
            int32_t rcx_22 = (rdi_1 + 1).d
            arg1[9].d = rcx_22
            
            if (rcx_22 s> *(arg1 + 0x4c))
                sub_1405a4f90(&arg1[8])
                rbx_4 = arg_8
            
            int16_t** rax_18 = (rdi_1 << 4) + arg1[8]
            *rax_18 = rbx_4
            rax_18[1] = rsi
            sub_140bd7fe0(arg1)
            
            if (r15_2 != 0)
                sub_140a74f90(r15_2)
            
            rbx_4.b = 1
            break
        
        int64_t r8_9 = data_1439a9aa0
        int64_t rcx_20
        
        while (true)
            rcx_20 = sx.q(rax_13)
            int64_t rdx_15 = rcx_20 * 3
            
            if (*(r8_9 + (rdx_15 << 3)) == rbx_4)
                break
            
            rax_13 = *(r8_9 + (rdx_15 << 3) + 0x10)
            
            if (rax_13 == 0xffffffff)
                goto label_14241f987
        
        if (rax_13 == 0xffffffff)
            goto label_14241f987
        
        void* rcx_26 = r8_9 + rcx_20 * 0x18
        
        if (rcx_26 == 0)
            goto label_14241f987
        
        int64_t* rcx_27 = *(rcx_26 + 8)
        
        if (rcx_27 == 0)
            goto label_14241f987
        
        int64_t rax_20
        rax_20, rdx_3 = sub_140be0d00(rcx_27, rbx_4, 0)
        
        if (rax_20 == -1)
            goto label_14241f987
    
    if (r15_2 != 0)
        rdx_3 = sub_140a74f90(r15_2)
    
    r14_2 += 1
    
    if (r14_2 s>= 0x400)
        rbx_4.b = 0
        break

int16_t* rcx_29 = var_70

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

return zx.q(rbx_4.b)
