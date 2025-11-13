// 函数: sub_1418250a0
// 地址: 0x1418250a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1

if ((*(arg1 + 0x29) & 1) != 0)
    return arg1

int32_t rdx_1 = arg2[1].d - *(arg2 + 0x34)
int32_t i_3 = 0
int32_t rsi = 0
void* r12 = nullptr
int32_t r10 = 0
void* var_c8 = nullptr
int64_t var_c0 = 0
int32_t arg_20 = 0

if (rdx_1 s> 0)
    sub_1405a51b0(&var_c8, rdx_1)
    r10 = var_c0:4.d
    rsi = var_c0.d
    r12 = var_c8
    arg_20 = r10

int32_t rdx_2 = arg2[5].d
void* r11 = &arg2[2]
int32_t var_a8 = 0
int32_t rcx_1 = 0
int32_t var_a4 = 1
int32_t r8 = 0
void* var_a0 = r11
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (rdx_2 != 0)
    void* rax_1 = *(r11 + 0x10)
    void* r9_1 = r11
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdx_2 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_141825188:
        int32_t rax_8 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t rcx_3 = *(r11 + 0x18)
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rcx_3)
            var_94.d = rcx_3
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_94:4.d = r8
            var_a8 = rcx_1
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141825188
        
        var_94.d = *(r11 + 0x18)

int32_t rdx_7 = arg2[5].d
var_94.d = rdx_7
int32_t r9_2 = 0xffffffff << (rdx_7.b & 0x1f)
int32_t rcx_6 = *(r11 + 0x18)
int32_t var_98_2 = r9_2
int128_t var_58 = var_a8.o
int32_t r9_4 = rdx_7 & 0xffffffe0
int32_t r8_3 = rdx_7 s>> 5
int128_t var_48 = 0xffffffff
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_88 = arg2.o
int128_t var_78 = var_58

if (rdx_7 != rcx_6)
    void* rax_11 = *(r11 + 0x10)
    
    if (rax_11 != 0)
        r11 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rcx_6 - 1)
    int32_t rdx_11 = *(r11 + (sx.q(r8_3) << 2)) & r9_2
    
    if (rdx_11 != 0)
    label_141825262:
        int32_t rax_18 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r15_1
        
        if (rax_18 == 0)
            r15_1 = 0x20
        else
            r15_1 = 0x1f - temp0_4
        
        var_94.d = r9_4 - r15_1 + 0x1f
        
        if (r9_4 - r15_1 + 0x1f s> rcx_6)
            var_94.d = rcx_6
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_3)
            r9_4 += 0x20
            r8_3 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r11 + (rcx_8 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141825262
        
        var_94.d = rcx_6
    
    r11 = &arg2[2]

while (true)
    int64_t rax_20 = sx.q(var_78:0xc.d)
    int64_t* rdx_12 = var_88.q
    
    if (rax_20.d == (var_98_2.q u>> 0x20).d && var_78.q == r11 && rdx_12 == arg2)
        int512_t zmm1_1 = sub_1405e1ad0(arg2, 0)
        int64_t* rdi_2 = arg_8
        int64_t rax_32 = (*(*rdi_2 + 0x20))(rdi_2)
        int64_t* rdx_14 = rdi_2[1]
        int32_t arg_18 = 0
        int32_t var_b8 = rsi
        arg_8.b = 0
        int32_t* r8_4 = *rdx_14
        int32_t var_b0
        var_b0.q = rax_32
        
        if (&r8_4[1] u> rdx_14[1])
            int32_t* rdx_15 = &arg_18
            
            if ((*(rdi_2 + 0x29) & 0x20) != 0)
                sub_140b54070(rdi_2, rdx_15, zmm1_1)
            else
                (*(*rdi_2 + 0x150))(rdi_2, rdx_15, 4)
        else
            arg_18 = *r8_4
            *rdx_14 += 4
        
        int64_t* rcx_22 = rdi_2[1]
        char* rdx_16 = *rcx_22
        
        if (&rdx_16[1] u> rcx_22[1])
            (*(*rdi_2 + 0x150))(rdi_2, &arg_8, 1)
        else
            arg_8.b = *rdx_16
            *rcx_22 += 1
        
        int64_t* rcx_24 = rdi_2[1]
        int32_t* rdx_18 = *rcx_24
        
        if (&rdx_18[1] u> rcx_24[1])
            int32_t* rdx_19 = &var_b8
            
            if ((*(rdi_2 + 0x29) & 0x20) != 0)
                sub_140b54070(rdi_2, rdx_19, zmm1_1)
            else
                (*(*rdi_2 + 0x150))(rdi_2, rdx_19, 4)
        else
            var_b8 = *rdx_18
            *rcx_24 += 4
        
        int32_t i_5 = var_b8 - rsi
        int32_t i_4 = rsi + i_5
        var_c0.d = i_4
        
        if (i_4 s> arg_20)
            sub_1405c4e40(&var_c8)
            i_4 = var_c0.d
            r12 = var_c8
            arg_20 = var_c0:4.d
        
        void* rcx_29 = (sx.q(rsi) << 5) + r12
        
        if (i_5 != 0)
            void* rax_41 = rcx_29 + 0x1c
            int32_t i
            
            do
                *(rcx_29 + 8) = 0
                rax_41 += 0x20
                *rcx_29 = 0
                rcx_29 += 0x20
                __builtin_memset(rax_41 - 0x34, 0, 0x18)
                i = i_5
                i_5 -= 1
            while (i != 1)
        
        if ((*(rdi_2 + 0x29) & 1) == 0)
            uint64_t* rsi_1 = r12
            void* r15_6 = (sx.q(i_4) << 5) + r12
            
            if (r12 != r15_6)
                do
                    zmm1_1 = sub_140a1d9d0(rdi_2, rsi_1, zmm1_1)
                    rsi_1 = &rsi_1[4]
                while (rsi_1 != r15_6)
            
            void* rsi_2 = r12
            
            if (r12 != r15_6)
                do
                    zmm1_1 = sub_140a1d9d0(rdi_2, rsi_2 + 0x10, zmm1_1)
                    rsi_2 += 0x20
                while (rsi_2 != r15_6)
            
            if ((*(rdi_2 + 0x29) & 1) == 0 && (rdi_2[5].b & 2) != 0)
                int64_t rax_43 = (*(*rdi_2 + 0x20))(rdi_2)
                int64_t r8_5 = *rdi_2
                int64_t rax_44 = var_b0.q
                arg_18 = rax_43.d - rax_44.d
                (*(r8_5 + 0x178))(rdi_2, rax_44, r8_5)
                int64_t* rdx_24 = rdi_2[1]
                int32_t* r8_6 = *rdx_24
                
                if (&r8_6[1] u> rdx_24[1])
                    int32_t* rdx_25 = &arg_18
                    
                    if ((*(rdi_2 + 0x29) & 0x20) != 0)
                        sub_140b54070(rdi_2, rdx_25, zmm1_1)
                    else
                        (*(*rdi_2 + 0x150))(rdi_2, rdx_25, 4)
                else
                    arg_18 = *r8_6
                    *rdx_24 += 4
                
                (*(*rdi_2 + 0x178))(rdi_2, rax_43)
        
        sub_1405e1ad0(arg2, i_4)
        void* rsi_4 = r12
        void* r15_9 = (sx.q(i_4) << 5) + r12
        
        if (r12 != r15_9)
            do
                sub_140bd2e80(arg2, rsi_4, rsi_4 + 0x10)
                rsi_4 += 0x20
            while (rsi_4 != r15_9)
        
        void* rsi_5 = r12
        
        if (i_4 != 0)
            int32_t i_1
            
            do
                int64_t rcx_42 = *(rsi_5 + 0x10)
                
                if (rcx_42 != 0)
                    sub_140a74f90(rcx_42)
                
                int64_t rcx_43 = *rsi_5
                
                if (rcx_43 != 0)
                    sub_140a74f90(rcx_43)
                
                rsi_5 += 0x20
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        var_c0.d = 0
        
        if (arg_20 != 0)
            sub_1405a51b0(&var_c8, 0)
            i_3 = var_c0.d
            r12 = var_c8
        
        (*(*rdi_2 + 0x178))(rdi_2, zx.q(arg_18) + var_b0.q)
        void* rsi_6 = r12
        
        if (i_3 != 0)
            int32_t i_2
            
            do
                int64_t rcx_46 = *(rsi_6 + 0x10)
                
                if (rcx_46 != 0)
                    sub_140a74f90(rcx_46)
                
                int64_t rcx_47 = *rsi_6
                
                if (rcx_47 != 0)
                    sub_140a74f90(rcx_47)
                
                rsi_6 += 0x20
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        if (r12 != 0)
            sub_140a74f90(r12)
        
        return rdi_2
    
    int64_t r15_2 = sx.q(rsi)
    rsi = (r15_2 + 1).d
    var_c0.d = rsi
    int64_t* r14_1 = *rdx_12 + rax_20 * 0x28
    
    if (rsi s> r10)
        sub_1405c4e40(&var_c8)
        rsi = var_c0.d
        r12 = var_c8
        arg_20 = var_c0:4.d
    
    void* rcx_15 = (r15_2 << 5) + r12
    *rcx_15 = 0
    *rcx_15 = *r14_1
    __builtin_memset(r14_1, 0, 0x20)
    *(rcx_15 + 8) = r14_1[1].d
    *(rcx_15 + 0xc) = *(r14_1 + 0xc)
    *(rcx_15 + 0x10) = 0
    *(rcx_15 + 0x10) = r14_1[2]
    *(rcx_15 + 0x18) = r14_1[3].d
    *(rcx_15 + 0x1c) = *(r14_1 + 0x1c)
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
    r10 = arg_20
    r11 = &arg2[2]
