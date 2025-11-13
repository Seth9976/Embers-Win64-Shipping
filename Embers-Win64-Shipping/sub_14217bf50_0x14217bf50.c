// 函数: sub_14217bf50
// 地址: 0x14217bf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void* rax_2 = *(arg1 + 0x88)
void* r15 = arg1
void* var_248 = arg1
uint64_t var_2a0

if (rax_2 != 0)
    uint64_t r13_1 = *(rax_2 + 0x68)
    var_2a0 = r13_1
    void* rax_3
    int64_t rax_4
    void* rdx_1
    
    if (r13_1 != 0)
        rax_3 = sub_14254d5d0()
        rdx_1 = *(r13_1 + 0x10)
        rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (r13_1 == 0 || rax_4.d s> *(rdx_1 + 0x38)
            || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        r13_1 = 0
        var_2a0 = 0
    
    int64_t rsi
    
    if (data_143f4d288 == 0 || r13_1 == 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    void* rax_6 = *(r15 + 0x88)
    int32_t rdx_2 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t rcx_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t* rdi_1 = *(rax_6 + 0x70)
    void* r14_1 = &rdi_1[sx.q(*(rax_6 + 0x78))]
    
    if (rdi_1 != r14_1)
        do
            void* rbx_1 = *rdi_1
            
            if (rbx_1 != 0)
                void* rax_8 = sub_142458ee0()
                void* rcx_2 = *(rbx_1 + 0x10)
                int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_9.d s<= *(rcx_2 + 0x38)
                        && *(*(rcx_2 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                    if (rsi.b != 0)
                        sub_1421595f0(&var_88, rbx_1 + 0x110)
                    
                    sub_141f83590(rbx_1, 0)
            
            rdi_1 = &rdi_1[1]
        while (rdi_1 != r14_1)
        
        rcx_1 = var_54_1
        int32_t var_80
        rdx_2 = var_80
    
    int32_t rdx_5 = rdx_2 - rcx_1
    int64_t var_7c
    void* var_68
    
    if (rdx_5 s> 0)
        int64_t* var_2b0 = nullptr
        int64_t var_2a8_1 = 0
        sub_14061cd70(&var_2b0, rdx_5)
        void* var_260_1 = &var_7c:4
        int32_t rcx_6 = 0
        int32_t var_268_1 = 0
        int32_t var_258_1 = 0xffffffff
        int32_t r8_3 = 0
        int32_t var_264_1 = 1
        int64_t var_254_1 = 0
        int32_t var_60
        
        if (var_60 != 0)
            void* r9_1 = &var_7c:4
            
            if (var_68 != 0)
                r9_1 = var_68
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_60 - 1)
            int32_t rdx_8 = *r9_1
            
            if (rdx_8 != 0)
            label_14217c179:
                int32_t rax_18 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_18)
                int32_t var_264_2 = rax_18
                int32_t var_240_1 = temp0_1
                int32_t rax_19
                
                if (rax_18 == 0)
                    rax_19 = 0x20
                else
                    rax_19 = 0x1f - temp0_1
                
                int32_t rax_20 = r8_3 - rax_19 + 0x1f
                
                if (rax_20 s> var_60)
                    rax_20 = var_60
                
                var_254_1.d = rax_20
            else
                while (true)
                    int64_t rdx_9 = sx.q(rcx_6)
                    r8_3 += 0x20
                    rcx_6 += 1
                    var_254_1:4.d = r8_3
                    var_268_1 = rcx_6
                    
                    if (rdx_9.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        var_254_1.d = var_60
                        break
                    
                    rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                    int32_t var_258_2 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_14217c179
        
        int32_t i_1 = var_2a8_1.d
        int64_t* r12_1 = var_2b0
        int128_t var_1e8_1 = 0xffffffff
        int128_t var_1f8_1
        var_1f8_1:8.d = 0xffffffff << (var_60.b & 0x1f)
        var_1f8_1:0xc.d = var_60
        int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t var_228 = (&var_88).o
        int128_t var_218_1 = var_268_1.o
        int64_t var_208_1 = zmm2
        
        while (true)
            int64_t rcx_9 = sx.q(var_218_1:0xc.d)
            char rax_22
            
            if (rcx_9.d != (var_1f8_1:8.q u>> 0x20).d || var_218_1.q != &var_7c:4)
                rax_22 = 0
            else
                rax_22 = 1
            
            int64_t* rdx_10 = var_228.q
            
            if (rax_22 == 0 || rdx_10 != &var_88)
                rax_22 = 1
            else
                rax_22 = 0
            
            if (rax_22 == 0)
                break
            
            int64_t rsi_1 = 0
            int64_t var_238_1 = 0
            int32_t rbx_2 = *(*rdx_10 + rcx_9 * 0xc)
            int64_t* rcx_11 = *(r13_1 + 0x310)
            int32_t var_280 = rbx_2
            int32_t r13_2
            int32_t r14_2
            
            if (rcx_11 != 0)
                int64_t var_290 = 0
                int64_t var_288_1 = 0
                sub_142168040(rcx_11, &var_280, &var_290)
                rsi_1 = var_290
                r13_2 = var_288_1:4.d
                var_290 = 0
                r14_2 = var_288_1.d
                int64_t var_238_2 = rsi_1
                int32_t var_230_1 = r14_2
                int32_t var_22c_1 = r13_2
                int64_t var_288_2 = 0
            
            if (rcx_11 == 0 || r14_2 s<= 1)
                int64_t var_278
                sub_140a2e390(&var_278, u"%d", zx.q(rbx_2))
                int64_t i_3 = sx.q(i_1)
                i_1 = (i_3 + 1).d
                var_2a8_1.d = i_1
                
                if (i_1 s> var_2a8_1:4.d)
                    sub_1405a4f90(&var_2b0)
                    i_1 = var_2a8_1.d
                    r12_1 = var_2b0
                
                int64_t* rdx_16 = &r12_1[i_3 * 2]
                *rdx_16 = 0
                *rdx_16 = var_278
                var_278 = 0
                int32_t var_270
                rdx_16[1].d = var_270
                int32_t var_26c
                *(rdx_16 + 0xc) = var_26c
                int64_t rcx_15 = var_278
                var_270.q = 0
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                if (rsi_1 != 0)
                    sub_140a74f90(rsi_1)
            else
                int64_t i_2 = sx.q(i_1)
                i_1 = (i_2 + 1).d
                var_2a8_1.d = i_1
                
                if (i_1 s> var_2a8_1:4.d)
                    sub_1405a4f90(&var_2b0)
                    i_1 = var_2a8_1.d
                    r12_1 = var_2b0
                
                int64_t rax_25 = i_2 * 2
                r12_1[rax_25] = rsi_1
                r12_1[rax_25 + 1].d = r14_2
                *(&r12_1[rax_25] + 0xc) = r13_2
            
            var_218_1:8.d &= not.d(var_228:0xc.d)
            sub_14059bdd0(&var_228:8)
            r13_1 = var_2a0
        
        r15 = var_248
        int64_t* rbx_3 = r12_1
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_18 = *rbx_3
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                rbx_3 = &rbx_3[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
    
    sub_14213f9e0(*(r15 + 0x88))
    int64_t* rcx_21 = *(r15 + 0x88)
    (*(*rcx_21 + 0x2a8))(rcx_21, 0)
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    int32_t var_80_1 = 0
    
    if (var_7c.d != 0)
        sub_140638cc0(&var_88, 0)
    
    int32_t var_58_2 = 0xffffffff
    int32_t var_54_2 = 0
    sub_14059a8e0(&var_7c:4, 0)
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_26 = var_88
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)

if (*(r15 + 0x98) s> 0)
    int32_t rsi_2 = 0
    int64_t rdi_2 = 0
    int32_t rax_45
    
    do
        void var_1d8
        int64_t* rax_32
        int512_t zmm1_1
        rax_32, zmm1_1 = _vfprintf_p_l(&var_1d8, u"Host closed the connection.", u"NetworkErrors")
        int64_t* rax_33 = sub_140ac6680(rax_32)
        var_2a0 = 0
        int32_t rbx_4 = rax_33[1].d
        int64_t r14_3 = *rax_33
        int32_t var_298_1 = rbx_4
        
        if (rbx_4 != 0)
            sub_1405a4c70(&var_2a0, rbx_4, 0)
            memcpy(var_2a0, r14_3, rbx_4 * 2)
        else
            int32_t var_294_1 = 0
        
        int64_t* var_1d0
        
        if (var_1d0 != 0)
            var_1d0[1].d -= 1
            
            if (var_1d0[1].d == 1)
                (**var_1d0)(var_1d0)
                int32_t rax_36 = *(var_1d0 + 0xc)
                *(var_1d0 + 0xc) -= 1
                
                if (rax_36 == 1)
                    (*(*var_1d0 + 8))(var_1d0, 1)
        
        int64_t* rcx_39 = *(r15 + 0x90)
        void* rbx_6 = *(rcx_39 + rdi_2)
        void* rdx_19 = **(rbx_6 + 0x1310)
        
        if (rdx_19 != 0 && (*(rdx_19 + 0x30) & 2) == 0)
            void** var_1a8
            sub_141f79620(&var_1a8, rdx_19, 0)
            char var_2b8 = 6
            int64_t* var_1a0
            char* rdx_20 = *var_1a0
            
            if (&rdx_20[1] u> var_1a0[1])
                var_1a8[0x2a](&var_1a8, &var_2b8, 1)
            else
                var_2b8 = *rdx_20
                *var_1a0 += 1
            
            sub_140a1d9d0(&var_1a8, &var_2a0, zmm1_1)
            int64_t r9_3
            r9_3.b = 1
            int64_t* rcx_37 = **(rbx_6 + 0x1310)
            (*(*rcx_37 + 0x2c8))(rcx_37, &var_248, &var_1a8, r9_3)
            sub_141f7bb50(&var_1a8)
            rcx_39 = *(r15 + 0x90)
        
        int64_t* rcx_40 = *(rcx_39 + rdi_2)
        rdx_19.b = 1
        (*(*rcx_40 + 0x2a8))(rcx_40, rdx_19)
        uint64_t rcx_41 = var_2a0
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        rax_45 = *(r15 + 0x98)
        rsi_2 += 1
        rdi_2 += 8
    while (rsi_2 s< rax_45)
    
    int64_t rbx_7 = sx.q(rax_45 - 1)
    
    if (rax_45 - 1 s>= 0)
        int64_t temp6_1
        
        do
            int64_t rcx_43 = *(r15 + 0x90)
            void* rax_48 = *(*(rcx_43 + (rbx_7 << 3)) + 0x30)
            
            if (rax_48 != 0)
                int64_t* rax_49 = *(rax_48 + 0x250)
                
                if (rax_49 != 0)
                    sub_141dbe590(rax_49, 1, 1)
                    rcx_43 = *(r15 + 0x90)
            
            int64_t* rcx_44 = *(rcx_43 + (rbx_7 << 3))
            (*(*rcx_44 + 0x2d8))(rcx_44)
            temp6_1 = rbx_7
            rbx_7 -= 1
        while (temp6_1 - 1 s>= 0)

sub_141b5cc00(r15 + 0x420, 0)
sub_142165da0(r15 + 0x470, 0)
bool cond:0 = *(r15 + 0x204) == 0
*(r15 + 0x200) = 0

if (not(cond:0))
    sub_1405c5570(r15 + 0x1f8, 0)

int64_t* rcx_48 = *(r15 + 0x108)

if (rcx_48 != 0)
    *(r15 + 0x108) = 0
    (**rcx_48)(rcx_48, 1)

void* result = sub_14217b900(r15, nullptr)
void* rcx_50 = *(r15 + 0x130)

if (rcx_50 != 0)
    sub_141c7eb40(rcx_50)
    void var_1c0
    result = &var_1c0
    
    if (r15 + 0x130 != &var_1c0)
        *(r15 + 0x130) = 0
        int64_t* rbx_8 = *(r15 + 0x138)
        
        if (rbx_8 != 0)
            *(r15 + 0x138) = 0
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                result = (**rbx_8)(rbx_8)
                int32_t temp2_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_8 + 8))(rbx_8, 1)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
