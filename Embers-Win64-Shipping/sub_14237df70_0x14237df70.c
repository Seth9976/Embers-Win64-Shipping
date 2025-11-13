// 函数: sub_14237df70
// 地址: 0x14237df70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
arg1[1].b = 0
uint64_t rdi = arg3
void* r12 = &arg1[0xd]
int64_t* arg_8 = &arg1[0xb]
__builtin_memset(&arg1[2], 0, 0x20)
*arg1 = &data_143335ba8
arg1[8] = 0
arg1[9].d = 0
*(arg1 + 0x4c) = 1
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
*r12 = 0
*(r12 + 8) = 0
arg1[0xf].b = 0
void* rax = arg2[0x15]

if (rax == 0)
    rax, arg3 = sub_141ee69e0(arg2)
    arg4 = arg_20

char rbx = *(rax + 0x118)
int64_t rcx_1 = sx.q(arg4)
int64_t* r13 = *(arg2[0x88] + 0x50)
void* rdx = *(*r13 + (rcx_1 << 3))
void* arg_18 = rdx
int64_t* rax_4 = rcx_1 * 0x430 + *rdi

if (*(arg2 + 0x207) == 2)
    arg1[1].b = 1

int32_t rax_5 = arg5
int64_t* var_f8

if (arg4 s< arg2[0x8d].d && arg4 s>= rax_5)
    int128_t* rdi_3 = rcx_1 * 0x90 + arg2[0x8c]
    
    if (*(arg2 + 0x207) != 2)
        arg3.b = 1
        void* rax_6
        rax_6, arg3 = sub_141f641a0(arg2, rdi_3, arg3.b)
        
        if (rax_6 != 0)
            arg1[2] = *rax_6
            arg1[3] = *(rax_6 + 8)
            arg1[4] = *(rax_6 + 0x30)
            sub_1405b0be0(r12, rax_6 + 0x10)
        
        rdx = arg_18
    
    arg1[0xc] = rdi_3 + 0x48
    void* r13_1 = rdi_3[3].q
    
    if (r13_1 != 0)
        int64_t rax_8 = sx.q(*(rdx + 0x30))
        
        if (rax_8.d s> 0)
            void* rdx_3 = rdx + 0x10
            int64_t rcx_7 = 0
            void* rax_9 = *(rdx_3 + 0x18)
            
            if (rax_9 != 0)
                rdx_3 = rax_9
            
            int64_t rax_10 = 0
            
            do
                if (*(rdx_3 + rax_10 + 0x10) u>= *(r13_1 + 0x34))
                    goto label_14237e329
                
                rcx_7 += 1
                rax_10 += 0x18
            while (rcx_7 s< rax_8)
        
        arg1[0xa] = r13_1
        int64_t rax_11 = sx.q(data_143f0f1a0)
        
        if ((((rax_11.d u> 0x18 || not(test_bit(0x100a040, rax_11.d)))
                && *(&data_143f025f0 + rax_11 * 0x14) != data_143f025b8) || (rax_11 - 0x19).d u<= 1
                || *(&data_143f025f0 + rax_11 * 0x14) == data_143f025d0)
                && (rax_11.d u> 0x1e || not(test_bit(0x6562c800, rax_11.d)))
                && (*(rax_11 * 0x14 + &data_143f025fc) & 1) == 0)
            sub_140d21e10(arg2, &var_f8, 0)
            uint64_t rdi_4 = 0
            int64_t* r12_1 = var_f8
            int64_t* var_e8 = &arg1[0xb]
            uint64_t var_c8 = 0
            int32_t var_f0
            int32_t var_bc
            uint64_t r12_2
            
            if (var_f0 != 0)
                sub_1405a4c70(&var_c8, var_f0, 0)
                rdi_4 = var_c8
                memcpy(rdi_4, r12_1, var_f0 * 2)
                r12_2 = rdi_4
                arg_8 = var_e8
            else
                var_bc = 0
                r12_2 = 0
            
            if (sub_140a80f40() == 0)
                uint32_t rax_18
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_18.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_18.b == 0))
                    void var_60
                    void** rax_19 = sub_142388e90(&var_60, nullptr, 0xff)
                    void* rcx_19 = *rax_19
                    *(rcx_19 + 0x10) = arg_8
                    *(rcx_19 + 0x18) = &rax_4[0x42]
                    *(rcx_19 + 0x20) = arg_20
                    *(rcx_19 + 0x28) = r13_1
                    *(rcx_19 + 0x30) = rdi_4
                    *(rcx_19 + 0x38) = var_f0
                    *(rcx_19 + 0x3c) = var_bc
                    void* rcx_20 = *rax_19
                    int64_t* r14_2 = *(rcx_20 + 0x48)
                    
                    if (r14_2 != 0)
                        r14_2[9].d += 1
                    
                    sub_141b66b40(rcx_20, rax_19[1], rax_19[2].d, 1)
                    
                    if (r14_2 != 0)
                        r14_2[9].d -= 1
                        
                        if (r14_2[9].d == 1)
                            sub_140a2f6e0(r14_2)
                else
                    int64_t* var_a0 = arg_8
                    void* var_98_1 = &rax_4[0x42]
                    int32_t var_90_1 = arg_20
                    int32_t var_74_1 = var_bc
                    void* var_88_1 = r13_1
                    uint64_t var_80_1 = rdi_4
                    int32_t var_78_1 = var_f0
                    sub_142382db0(&var_a0)
                    
                    if (rdi_4 != 0)
                        sub_140a74f90(rdi_4)
            else
                sub_142382db0(&var_e8)
                
                if (r12_2 != 0)
                    sub_140a74f90(r12_2)
            
            int64_t* rcx_22 = var_f8
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            r12 = &arg1[0xd]
    
label_14237e329:
    rax_5 = arg5

int32_t rdx_25 = arg_20

if (rdx_25 s> 0 && arg6 != 0 && arg2[0x8d].d s> 0 && *(arg2 + 0x207) != 2 && rdx_25 s>= rax_5)
    arg3.b = 1
    void* rax_21 = sub_141f641a0(arg2, arg2[0x8c], arg3.b)
    
    if (rax_21 != 0)
        arg1[2] = *rax_21
        arg1[3] = *(rax_21 + 8)
        arg1[4] = *(rax_21 + 0x30)
        sub_1405b0be0(r12, rax_21 + 0x10)
    
    rdx_25 = arg_20

if (arg1[2] == 0)
    arg_8.b = 0

if (arg1[2] != 0 || arg1[3] != 0)
    arg_8.b = 1

int32_t rdx_26 = *(*(*r13 + (sx.q(rdx_25) << 3)) + 0x30)
arg1[9].d = 0

if (*(arg1 + 0x4c) != rdx_26)
    sub_140dbd3e0(&arg1[6], rdx_26)

int32_t i = 0

if (*(arg_18 + 0x30) s> 0)
    void* rax_24 = arg_18 + 0x10
    uint32_t rbx_1 = zx.d(rbx)
    int64_t r14_3 = 0
    void* var_a8_1 = rax_24
    void* rdx_27 = nullptr
    int64_t var_b0_1 = 0
    int64_t* arg_10 = nullptr
    
    do
        void* rcx_28 = *(rax_24 + 0x18)
        int64_t r8_3 = *arg2
        int32_t var_f0_1 = 0
        
        if (rcx_28 != 0)
            rax_24 = rcx_28
        
        int32_t var_ec_1 = 0xffffffff
        int64_t* rax_25 = (*(r8_3 + 0x548))(arg2, zx.q(*(rax_24 + rdx_27)), r8_3)
        bool cond:5_1 = data_143f597d8 == 0
        int64_t* rdi_5 = rax_25
        var_f8 = rax_25
        
        if (cond:5_1)
        label_14237e455:
            
            if (rdi_5 == 0)
                goto label_14237e477
            
            if (arg_8.b != 0 && (*(*rdi_5 + 0x2d8))(rdi_5, 4) == 0)
                goto label_14237e477
        else
            if (rax_25 != 0)
                int64_t rdx_29 = *rax_25
                
                if ((*(rdx_29 + 0x3f8))(rax_25, rdx_29) u<= 1)
                    int64_t* rax_27 = sub_14210f630(0)
                    rdi_5 = rax_27
                    var_f8 = rax_27
                
                goto label_14237e455
            
        label_14237e477:
            int64_t* rax_30 = sub_14210f630(0)
            rdi_5 = rax_30
            var_f8 = rax_30
        
        if (sub_1423b4730(rdi_5, (*(*rax_4 + 0x40))(rax_4), rbx_1) != 0
                && (*(arg_18 + 0x44) & 1) == 0)
            int64_t* rax_35 = sub_14210f630(0)
            rdi_5 = rax_35
            var_f8 = rax_35
        
        int64_t rcx_34 = sx.q(arg_20)
        
        if (rcx_34.d s< arg2[0x8d].d)
            void* rax_38 = rcx_34 * 0x90 + arg2[0x8c]
            
            if (i s< *(rax_38 + 0x40))
                int32_t* rcx_35 = *(rax_38 + 0x38)
                int32_t var_f0_2 = *(rcx_35 + r14_3)
                int32_t var_ec_2 = *(rcx_35 + r14_3 + 4)
        
        int64_t r14_4 = sx.q(arg1[9].d)
        int32_t rax_41 = (r14_4 + 1).d
        arg1[9].d = rax_41
        
        if (rax_41 s> *(arg1 + 0x4c))
            sub_140dbce10(&arg1[6], r14_4.d)
        
        void* rax_42 = arg1[8]
        void* rcx_37 = &arg1[6]
        int128_t zmm0_1 = var_f8.o
        
        if (rax_42 != 0)
            rcx_37 = rax_42
        
        int128_t var_70 = zx.o(0)
        *(rcx_37 + r14_4 * 0x10) = zmm0_1
        int64_t* rax_46 = (*(*rdi_5 + 0x270))(rdi_5, &var_70)
        int64_t r9_2 = *rax_46
        int64_t* rax_47 = (*(r9_2 + 0x2e0))(rax_46, zx.q(rbx_1), 3, r9_2)
        
        if (rax_47 != 0)
            bool rcx_40
            
            if (data_143de5480 != 0)
                rcx_40 = GetCurrentThreadId() == data_143de5470
            
            char rax_49
            
            if (data_143de5480 == 0 || rcx_40 != 0)
                rax_49 = sub_14212f050(rax_47)
            else
                rax_49 = sub_14212f090(rax_47)
            
            if (rax_49 != 0)
                arg1[0xf].b = 1
        
        i += 1
        rdx_27 = &arg_10[3]
        r14_3 = var_b0_1 + 8
        arg_10 = rdx_27
        rax_24 = var_a8_1
        var_b0_1 = r14_3
    while (i s< *(arg_18 + 0x30))

return arg1
