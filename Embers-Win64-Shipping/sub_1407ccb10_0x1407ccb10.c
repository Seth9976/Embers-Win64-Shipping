// 函数: sub_1407ccb10
// 地址: 0x1407ccb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3.d
void var_448
int64_t rax_1 = __security_cookie ^ &var_448
int32_t r14 = 0
int32_t r15 = 0
int32_t var_428 = 0
AcquireSRWLockExclusive(arg1)
int32_t rdx = arg1->__offset(0x10).d
int32_t rax_2 = 0x20
int32_t r8 = arg1->__offset(0x3c).d
int32_t rcx_1 = rdx - r8
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0x20
void* var_278 = nullptr
int32_t var_270 = 0
int32_t var_26c = 0x20
void* var_168 = nullptr
int32_t var_160 = 0
int32_t var_15c = 0x20
void var_378

if (rcx_1 s> 0x20)
    sub_1407c43b0(&var_378, rcx_1)
    rdx = arg1->__offset(0x10).d
    r8 = arg1->__offset(0x3c).d
    rax_2 = var_15c

int32_t rdx_2 = rdx - r8
void var_268

if (rdx_2 s> rax_2)
    sub_1407c43b0(&var_268, rdx_2)

int32_t var_41c = 1
int32_t r11 = arg1[6].Ptr.d
void* r10 = &arg1[3]
void* var_418 = r10
int32_t rcx_4 = 0
int32_t var_420 = 0
int32_t r8_1 = 0
int32_t var_410 = 0xffffffff
int64_t var_40c = 0

if (r11 != 0)
    void* rax_3 = *(r10 + 0x10)
    void* r9_1 = r10
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_1407ccc6b:
        int32_t rax_10 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_41c_1 = rax_10
        int32_t var_428_1 = temp0_1
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        var_40c.d = r8_1 - rax_11 + 0x1f
        
        if (r8_1 - rax_11 + 0x1f s> r11)
            var_40c.d = r11
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_4)
            r8_1 += 0x20
            rcx_4 += 1
            var_40c:4.d = r8_1
            var_420 = rcx_4
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_410_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_1407ccc6b
        
        var_40c.d = r11
    
    r10 = &arg1[3]

int32_t rdx_7 = arg1[6].Ptr.d
uint64_t rdi = zx.q(*(r10 + 0x18))
int128_t var_3f8 = var_420.o
int32_t rsi = 0xffffffff << (rdx_7.b & 0x1f)
int32_t r8_4 = rdx_7 s>> 5
int128_t var_3e8 = 0xffffffff
int32_t r9_3 = rdx_7 & 0xffffffe0
void* var_400
var_400.d = r8_4
int64_t var_3a0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_3f8
var_3f8:8.d = rsi
var_3f8:0xc.d = rdx_7
var_3e8.d = r9_3
int128_t var_3c0 = (&arg1[1]).o
int128_t var_3b0 = zmm1

if (rdx_7 != rdi.d)
    void* rax_13 = *(r10 + 0x10)
    
    if (rax_13 != 0)
        r10 = rax_13
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q((rdi - 1).d)
    int32_t rdx_11 = *(r10 + (sx.q(r8_4) << 2)) & rsi
    
    if (rdx_11 != 0)
    label_1407ccd5d:
        int32_t rax_20 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t var_3d8_1 = temp0_3
        int32_t rbx_1
        
        if (rax_20 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        var_3f8:0xc.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> rdi.d)
            var_3f8:0xc.d = rdi.d
    else
        while (true)
            int64_t rcx_9 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            var_3e8.d = r9_3
            var_400.d = r8_4
            
            if (rcx_9.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10 + (rcx_9 << 2) + 4)
            var_3f8:8.d = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_1407ccd5d
        
        var_3f8:0xc.d = rdi.d
    
    r10 = &arg1[3]

while (true)
    int64_t rax_22 = sx.q(var_3b0:0xc.d)
    int64_t rcx_11 = var_3c0.q
    void var_158
    
    if (rax_22.d == (var_3f8:8.q u>> 0x20).d && var_3b0.q == r10 && rcx_11 == &arg1[1])
        void* rbx_7 = &var_158
        int64_t rdi_1 = 0
        
        if (var_58 != 0)
            rbx_7 = var_58
        
        int64_t rsi_3 = sx.q(var_50) << 3
        uint64_t rsi_4 = rsi_3 u>> 3
        
        if (rbx_7 u> rbx_7 + rsi_3)
            rsi_4 = 0
        
        if (rsi_4 != 0)
            do
                sub_1407c2250(&arg1[1], *rbx_7)
                rdi_1 += 1
                rbx_7 += 8
            while (rdi_1 != rsi_4)
        
        if (var_270 s> 0)
            int64_t rbx_8 = 0
            
            do
                void* rcx_27 = &var_378
                
                if (var_278 != 0)
                    rcx_27 = var_278
                
                sub_1407cc8a0(*(rcx_27 + rbx_8), arg_18, 0)
                r14 += 1
                rbx_8 += 8
            while (r14 s< var_270)
        
        if (var_160 != 0)
            void* var_398 = &var_268
            int32_t* var_390_1 = &arg_18
            int64_t (* var_388)(int64_t* arg1, int32_t* arg2) = sub_140786980
            void** var_380_1 = &var_398
            sub_14077b750(var_160, &var_388, 0)
        
        if (var_168 != 0)
            sub_140a74f90(var_168)
        
        if (var_278 != 0)
            sub_140a74f90(var_278)
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        int64_t result = ReleaseSRWLockExclusive(arg1)
        __security_check_cookie(rax_1 ^ &var_448)
        return result
    
    int64_t* rbx_4 = rax_22 * 0x30 + *rcx_11
    
    if (arg2 == 0)
        rbx_4[1].b = 0
    
    void* rax_23 = sub_140d3c6e0(rbx_4)
    
    if (rax_23 == 0)
    label_1407cce17:
        rdi = sx.q(var_50)
        int32_t rax_28 = (rdi + 1).d
        var_50 = rax_28
        
        if (rax_28 s> var_4c)
            sub_1407c3a50(&var_158, rdi.d)
        
        void* rdx_15 = &var_158
        
        if (var_58 != 0)
            rdx_15 = var_58
        
        *(rdx_15 + (rdi << 3)) = *rbx_4
    else
        void* rax_24 = rbx_4[3]
        
        if (rax_24 != 0 && *(rax_24 + 8) == 1)
            goto label_1407cce17
        
        void* rax_25 = rbx_4[2]
        
        if (*(rax_25 + 0x38) s<= 0)
            int32_t* rcx_14 = *(rax_25 + 0x80)
            void* rdx_13 = sx.q(*(rax_25 + 0x88)) * 0x38 + rcx_14
            
            if (rcx_14 == rdx_13)
                goto label_1407cce17
            
            while (*rcx_14 s<= 0)
                rcx_14 = &rcx_14[0xe]
                
                if (rcx_14 == rdx_13)
                    goto label_1407cce17
            
            goto label_1407cce73
        
    label_1407cce73:
        
        if (rbx_4[1].b != 1)
            if (arg2 != 6)
                char rax_33 = *(rax_23 + 0x38)
                char rcx_17 = *(rax_23 + 0x39)
                
                if (rax_33 u>= rcx_17)
                    rcx_17 = rax_33
                
                int64_t* var_3d0
                void* rax_35
                int64_t rax_37
                
                if (zx.d(rcx_17) s<= arg2)
                    rax_35 = *(rax_23 + 0x50)
                    
                    if (rax_35 != 0 && *(rax_35 + 0x10) != 0)
                        r15 |= 1
                        void* rcx_19 = *sub_1423c0d30(rax_23 + 0x30, &var_3d0)
                        rax_37 = 0
                        
                        if (0 == *(rcx_19 + 8))
                            *(rcx_19 + 8) = 0
                        else
                            rax_37 = *(rcx_19 + 8)
                
                if (zx.d(rcx_17) s> arg2 ||
                        (rax_35 != 0 && *(rax_35 + 0x10) != 0 && ((rax_37 u>> 0x1a).b & 1) == 0))
                    rdi.b = 1
                else
                    rdi.b = 0
                
                if ((r15.b & 1) != 0)
                    int64_t* rcx_20 = var_3d0
                    r15 &= 0xfffffffe
                    
                    if (rcx_20 != 0)
                        rcx_20[9].d -= 1
                        
                        if (rcx_20[9].d == 1)
                            sub_140a2f6e0(rcx_20)
            
            if (arg2 == 6 || rdi.b == 0)
                rbx_4[1].b = 1
                rdi = rbx_4[2]
                
                if ((((rbx_4[4] u>> 0x20).d u>> 1).b & 1) == 0)
                    int64_t rbx_6 = sx.q(var_270)
                    int32_t rax_45 = (rbx_6 + 1).d
                    var_270 = rax_45
                    
                    if (rax_45 s> var_26c)
                        sub_1407c3890(&var_378, rbx_6.d)
                    
                    void* rcx_24 = &var_378
                    
                    if (var_278 != 0)
                        rcx_24 = var_278
                    
                    *(rcx_24 + (rbx_6 << 3)) = rdi
                else
                    int64_t rbx_5 = sx.q(var_160)
                    int32_t rax_43 = (rbx_5 + 1).d
                    var_160 = rax_43
                    
                    if (rax_43 s> var_15c)
                        sub_1407c3890(&var_268, rbx_5.d)
                    
                    void* rcx_22 = &var_268
                    
                    if (var_168 != 0)
                        rcx_22 = var_168
                    
                    *(rcx_22 + (rbx_5 << 3)) = rdi
    
    var_3b0:8.d &= not.d(var_3c0:0xc.d)
    sub_14059bdd0(&var_3c0:8)
    r10 = &arg1[3]
