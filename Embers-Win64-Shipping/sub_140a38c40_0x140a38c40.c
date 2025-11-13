// 函数: sub_140a38c40
// 地址: 0x140a38c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t i_5 = sx.q(arg4)
void* r15 = arg3
void* var_c0 = arg3
int64_t* result = arg2
void* rdi = arg1
sub_140a37ea0(arg1)
sub_140a38850()
void* lpCriticalSection_1 = &data_143cf8d78
void* lpCriticalSection = &data_143cf8d78
EnterCriticalSection(&data_143cf8d78)
int64_t i_2 = i_5
int64_t rax_3 = i_5 * 2
int64_t rax_6
int32_t rdx
rdx:rax_6 = sx.o(*(r15 + (rax_3 << 3) - 0x10) + *(r15 + (rax_3 << 3) - 8) - 1)
int32_t rax_8 = ((rax_6 + (zx.q(rdx) & 0x3fff)) s>> 0xe).d

if (sx.q(rax_8) s>= *(rdi + 0x28))
    *(rdi + 0x28) = sx.q(rax_8 + 1)
    sub_140a39ba0(rdi + 8, rax_8 + 1, 0)
    sub_140a39b30(rdi + 0x18, *(rdi + 0x28), 0)

int64_t r14 = 0
int32_t var_54 = 4
void* var_60 = nullptr
int32_t i_4 = 0
int32_t* var_f0 = nullptr
int64_t var_e8 = 0

if (i_5.d != 0)
    sub_1405dadb0(&var_f0, i_5.d)

int32_t rbx = 0
void var_80

if (i_5 s> 0)
    int64_t i
    
    do
        int64_t r9 = *(r15 + 8)
        int64_t rsi_2 = arg5 + *r15
        int64_t var_f8_1 = rsi_2
        int64_t rax_12
        int32_t rdx_5
        rdx_5:rax_12 = sx.o(rsi_2)
        int64_t rcx_6 = r9 + rsi_2
        int32_t r8_1 = (((zx.q(rdx_5) & 0x3fff) + rax_12) s>> 0xe).d
        int64_t rax_14
        int32_t rdx_7
        rdx_7:rax_14 = sx.o(rcx_6 - 1)
        int32_t rax_16 = ((rax_14 + (zx.q(rdx_7) & 0x3fff)) s>> 0xe).d
        int64_t r13_1 = rsi_2 - sx.q(r8_1 << 0xe)
        int64_t r15_1 = 0x4000 - r13_1
        
        if (r9 s<= r15_1)
            r15_1 = r9
        
        if (rbx s<= r8_1)
            rbx = r8_1
        else
            sub_140a38b30(lpCriticalSection, *(*(rdi + 8) + (sx.q(r8_1) << 2)), r13_1.d, r15_1.d)
            rsi_2 += r15_1
            int64_t rax_21 = rcx_6 - rsi_2
            var_f8_1 = rsi_2
            r15_1 = 0x4000
            r13_1 = 0
            
            if (rax_21 s<= 0x4000)
                r15_1 = rax_21
        
        if (rbx s<= rax_16)
            do
                int64_t rax_22 = *(rdi + 8)
                int64_t r12 = sx.q(rbx)
                int32_t* rdi_1 = rax_22 + (r12 << 2)
                
                if (*(rax_22 + (r12 << 2)) == 0xffffffff)
                    int64_t rsi_3 = sx.q(var_e8.d)
                    int32_t var_a8
                    int32_t rdx_11 = *sub_140a37a70(arg1, &var_a8, lpCriticalSection_1, rbx, arg6)
                    int32_t rax_25 = (rsi_3 + 1).d
                    *rdi_1 = rdx_11
                    var_e8.d = rax_25
                    
                    if (rax_25 s> var_e8:4.d)
                        sub_1405a4cf0(&var_f0)
                        rdx_11 = *rdi_1
                    
                    var_f0[rsi_3] = rdx_11
                    rsi_2 = var_f8_1
                
                sub_140a38b30(lpCriticalSection_1, *rdi_1, r13_1.d, r15_1.d)
                int64_t rax_27 = *(arg1 + 0x18)
                void* rcx_14 = *(rax_27 + (r12 << 3))
                int64_t* rdi_2 = rax_27 + (r12 << 3)
                int64_t rax_28
                
                if (rcx_14 != 0)
                    rax_28 = 0
                    
                    if (0 == *(rcx_14 + 8))
                        *(rcx_14 + 8) = 0
                    else
                        rax_28 = *(rcx_14 + 8)
                
                if (rcx_14 == 0 || ((rax_28 u>> 0x1a).b & 1) != 0)
                    int64_t* rcx_17 = *rdi_2
                    *rdi_2 = 0
                    
                    if (rcx_17 != 0)
                        rcx_17[9].d -= 1
                        
                        if (rcx_17[9].d == 1)
                            sub_140a2f6e0(rcx_17)
                else
                    int64_t i_7 = sx.q(i_4)
                    int32_t i_6 = (i_7 + 1).d
                    i_4 = i_6
                    
                    if (i_6 s> var_54)
                        sub_14083a490(&var_80, i_7.d)
                    
                    void* rcx_16 = &var_80
                    void* rdx_15 = *rdi_2
                    
                    if (var_60 != 0)
                        rcx_16 = var_60
                    
                    *(rcx_16 + (i_7 << 3)) = rdx_15
                    rsi_2 = var_f8_1
                    
                    if (rdx_15 != 0)
                        *(rdx_15 + 0x48) += 1
                
                rsi_2 += r15_1
                rdi = arg1
                int64_t rax_33 = rcx_6 - rsi_2
                rbx += 1
                var_f8_1 = rsi_2
                r15_1 = 0x4000
                r13_1 = 0
                
                if (rax_33 s<= 0x4000)
                    r15_1 = rax_33
            while (rbx s<= rax_16)
            
            lpCriticalSection = lpCriticalSection_1
        
        r15 = var_c0 + 0x10
        i = i_2
        i_2 -= 1
        var_c0 = r15
    while (i != 1)
    result = arg2

*result = 0

if (i_4 s<= 0)
    int64_t rbx_4 = sx.q(var_e8.d)
    
    if (rbx_4.d s> 0)
        int32_t* r9_5 = var_f0
        void* rcx_24 = &r9_5[rbx_4]
        uint64_t r11_4 = (rcx_24 - r9_5 + 3) u>> 2
        
        if (r9_5 u> rcx_24)
            r11_4 = 0
        
        if (r11_4 != 0)
            do
                int64_t rax_37 = sx.q(*r9_5)
                int32_t rbx_5 = (rax_37 + 2).d
                int64_t rcx_26 = (rax_37 + 2) * 0x28
                void* r10_2 = *(lpCriticalSection + 0xd0) + rcx_26
                int16_t r8_8 = *(r10_2 + 0x20)
                
                if (r8_8 == 1)
                    bool cond:1_1 = *r10_2 != 0
                    *(r10_2 + 0x1c) = data_14399fa50
                    
                    if (not(cond:1_1))
                        void* rdx_20 = *(lpCriticalSection + 0xd0)
                        *(rdx_20 + rcx_26 + 0x14) = 1
                        *(rdx_20 + rcx_26 + 0x18) = *(rdx_20 + 0x40)
                        *(*(lpCriticalSection + 0xd0) + sx.q(*(rdx_20 + 0x40)) * 0x28 + 0x14) =
                            rbx_5
                        *(rdx_20 + 0x40) = rbx_5
                
                r9_5 = &r9_5[1]
                r14 += 1
                *(r10_2 + 0x20) = r8_8 - 1
            while (r14 != r11_4)
else
    void var_98
    int64_t* rax_34 = sub_140a382b0(&var_98, &var_80, 0xff)
    int32_t rbx_1 = var_e8.d
    void* rdi_3 = *rax_34
    *(rdi_3 + 0x10) = 0
    *(rdi_3 + 0x18) = rbx_1
    
    if (rbx_1 != 0)
        int64_t rbx_2 = sx.q(var_e8.d)
        sub_1405c4a90(rdi_3 + 0x10, rbx_2.d, 0)
        memcpy(*(rdi_3 + 0x10), var_f0, (rbx_2 << 2).d)
    else
        *(rdi_3 + 0x1c) = 0
    
    void* rcx_21 = *rax_34
    int32_t r8_7 = rax_34[2].d
    int64_t* rdx_19 = rax_34[1]
    int64_t* rbx_3 = *(rcx_21 + 0x28)
    int64_t* var_b0 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[9].d += 1
    
    sub_140a39c10(rcx_21, rdx_19, r8_7, 1)
    
    if (result != &var_b0)
        int64_t* rcx_22 = *result
        *result = rbx_3
        
        if (rcx_22 != 0)
            rcx_22[9].d -= 1
            
            if (rcx_22[9].d == 1)
                sub_140a2f6e0(rcx_22)
    else if (rbx_3 != 0)
        rbx_3[9].d -= 1
        
        if (rbx_3[9].d == 1)
            sub_140a2f6e0(var_b0)

int32_t* r9_6 = var_f0

if (r9_6 != 0)
    sub_140a74f90(r9_6)

void* rbx_6 = &var_80
int32_t i_3 = i_4

if (var_60 != 0)
    rbx_6 = var_60

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_30 = *rbx_6
        
        if (rcx_30 != 0)
            rcx_30[9].d -= 1
            
            if (rcx_30[9].d == 1)
                sub_140a2f6e0(rcx_30)
        
        rbx_6 += 8
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (var_60 != 0)
    sub_140a74f90(var_60)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_128)
return result
