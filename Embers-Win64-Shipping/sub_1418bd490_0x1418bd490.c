// 函数: sub_1418bd490
// 地址: 0x1418bd490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1af8) != 0)
    int64_t rax_1 = data_143efb650(*(arg1 + 8), "vkDestroyValidationCacheEXT")
    
    if (rax_1 != 0)
        rax_1(*(arg1 + 8), *(arg1 + 0x1af8), 0)

data_143efb840(*(arg1 + 8), *(arg1 + 0x7a8), 0)
void* rbx = *(arg1 + 0x460)
*(arg1 + 0x7a8) = zx.o(0)
*(arg1 + 0x7b8) = 0.q

if (rbx != 0)
    sub_1418d2d40(rbx)
    j_sub_140a74f90(rbx)

void* rbx_1 = *(arg1 + 0x468)
*(arg1 + 0x460) = 0

if (rbx_1 != 0)
    sub_1418d2c70(rbx_1)
    j_sub_140a74f90(rbx_1)

int64_t* rcx_7 = *(arg1 + 0x7a0)
*(arg1 + 0x468) = 0
*(arg1 + 0x798) = 0

if (rcx_7 != 0)
    (**rcx_7)(rcx_7, 1)

*(arg1 + 0x7a0) = 0
int32_t r11 = *(arg1 + 0x1a98)
int32_t var_94 = 1
int32_t rcx_8 = 0
int32_t var_98 = 0
int32_t r8 = 0
void* var_90 = arg1 + 0x1a80
int32_t var_88_1 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_3 = *(arg1 + 0x1a90)
    void* r9_1 = arg1 + 0x1a80
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_7 = *r9_1
    
    if (rdx_7 != 0)
    label_1418bd618:
        int32_t rax_10 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_94_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_8 = sx.q(rcx_8)
            r8 += 0x20
            rcx_8 += 1
            var_84:4.d = r8
            var_98 = rcx_8
            
            if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
            int32_t var_88_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_1418bd618
        
        var_84.d = r11

int32_t rdx_9 = *(arg1 + 0x1a98)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_9.b & 0x1f)
uint128_t var_48 = var_98.o
int32_t r8_3 = rdx_9 s>> 5
int32_t r9_3 = rdx_9 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_3 = r12
var_84.d = rdx_9
uint128_t var_78 = (arg1 + 0x1a70).o
int96_t var_68 = var_48:8.12

if (rdx_9 != r11)
    void* rax_13 = *(arg1 + 0x1a90)
    void* r10_1 = arg1 + 0x1a80
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_13 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_13 != 0)
    label_1418bd6e2:
        int32_t rax_20 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rbx_2
        
        if (rax_20 == 0)
            rbx_2 = 0x20
        else
            rbx_2 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rbx_2 + 0x1f
        
        if (r9_3 - rbx_2 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_13 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r10_1 + (rcx_13 << 2) + 4)
            var_88_3 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_1418bd6e2
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rax_22 = sx.q(var_5c)
    int64_t* rdx_14 = var_78.q
    
    if (rax_22.d == (var_88_3.q u>> 0x20).d && var_68.q == arg1 + 0x1a80 && rdx_14 == arg1 + 0x1a70)
        sub_1408d84f0(arg1 + 0x1a70)
        int32_t rax_25 = *(arg1 + 0x1a68)
        int64_t rbx_5 = sx.q(rax_25 - 1)
        
        if (rax_25 - 1 s>= 0)
            int64_t temp6_1
            
            do
                int64_t* rcx_19 = *(*(arg1 + 0x1a60) + (rbx_5 << 3))
                
                if (rcx_19 != 0)
                    (*(*rcx_19 + 0xf8))(rcx_19, 1)
                
                temp6_1 = rbx_5
                rbx_5 -= 1
            while (temp6_1 - 1 s>= 0)
        
        int32_t rax_29 = *(arg1 + 0x1a6c)
        *(arg1 + 0x1a68) = 0
        
        if (rax_29 s< 0 && rax_29 != 0)
            sub_1405c5570(arg1 + 0x1a60, 0)
        
        int64_t* r8_4 = *(arg1 + 0x1a58)
        int64_t* rcx_21 = *(arg1 + 0x1a50)
        
        if (r8_4 != rcx_21 && r8_4 != 0)
            (*(*r8_4 + 0xf8))(r8_4, 1)
            rcx_21 = *(arg1 + 0x1a50)
        
        *(arg1 + 0x1a58) = 0
        
        if (rcx_21 != 0)
            (*(*rcx_21 + 0xf8))(rcx_21, 1)
        
        *(arg1 + 0x1a50) = 0
        int64_t* rbx_6 = *(arg1 + 0x1530)
        int64_t rdi_1 = 0
        uint64_t r14_1 = sx.q(*(arg1 + 0x1538))
        uint64_t r15_1 = r14_1 << 3 u>> 3
        
        if (rbx_6 u> &rbx_6[r14_1])
            r15_1 = 0
        
        if (r15_1 != 0)
            do
                int64_t* rcx_23 = *rbx_6
                
                if (rcx_23 != 0)
                    (**rcx_23)(rcx_23, 1)
                
                rbx_6 = &rbx_6[1]
                rdi_1 += 1
            while (rdi_1 != r15_1)
            
            r14_1 = zx.q(*(arg1 + 0x1538))
        
        int32_t temp7 = r14_1.d
        
        if (temp7 s< 0)
            *(arg1 + 0x1538) = 0
            
            if (*(arg1 + 0x153c) s< 0)
                sub_1405a4d70(arg1 + 0x1530)
            
            memset(*(arg1 + 0x1530) + (sx.q(r14_1.d) << 3), 0, sx.q(neg.d(r14_1.d)) << 3)
        else if (temp7 s> 0 && r14_1.d != 0)
            *(arg1 + 0x1538) = 0
        
        int64_t rdi_2 = 0
        int64_t* rbx_9 = *(arg1 + 0x1540)
        uint64_t r14_2 = sx.q(*(arg1 + 0x1548))
        uint64_t r15_3 = r14_2 << 3 u>> 3
        
        if (rbx_9 u> &rbx_9[r14_2])
            r15_3 = 0
        
        if (r15_3 != 0)
            do
                int64_t* rcx_27 = *rbx_9
                
                if (rcx_27 != 0)
                    (**rcx_27)(rcx_27, 1)
                
                rbx_9 = &rbx_9[1]
                rdi_2 += 1
            while (rdi_2 != r15_3)
            
            r14_2 = zx.q(*(arg1 + 0x1548))
        
        int32_t temp8 = r14_2.d
        
        if (temp8 s< 0)
            *(arg1 + 0x1548) = 0
            
            if (*(arg1 + 0x154c) s< 0)
                sub_1405a4d70(arg1 + 0x1540)
            
            memset(*(arg1 + 0x1540) + (sx.q(r14_2.d) << 3), 0, sx.q(neg.d(r14_2.d)) << 3)
        else if (temp8 s> 0 && r14_2.d != 0)
            *(arg1 + 0x1548) = 0
        
        sub_1419712f0(0)
        int64_t* rbx_12 = *(arg1 + 0x1b00)
        
        if (rbx_12 != 0)
            sub_1418d3100(rbx_12)
            j_sub_140a74f90(rbx_12)
        
        *(arg1 + 0x1b00) = 0
        EnterCriticalSection(&data_143efb230)
        sub_1418c3030(arg1 + 0x3f0, 1, 1)
        LeaveCriticalSection(&data_143efb230)
        
        if (data_143efb318 != 0)
            char rax_38 = (*(arg1 + 0x1af0)).b
            void* r14_3
            
            if ((rax_38 & 0x10) == 0)
                r14_3 = arg1 + 0x10
            else
                void* rbx_13 = *(arg1 + 0x1588)
                data_143efb730(*(rbx_13 + 8), *(rbx_13 + 0x10))
                *(rbx_13 + 0x18) = 0
                data_143efb808(*(arg1 + 8), *(arg1 + 0x1580), 0)
                r14_3 = arg1 + 0x10
                *(arg1 + 0x1580) = 0
                sub_1418beb20(r14_3, arg1 + 0x1588)
                rax_38 = (*(arg1 + 0x1af0)).b
            
            if ((rax_38 & 0x20) != 0)
                void* rbx_14 = *(arg1 + 0x1588)
                data_143efb730(*(rbx_14 + 8), *(rbx_14 + 0x10))
                *(rbx_14 + 0x18) = 0
                sub_1418beb20(r14_3, arg1 + 0x1588)
        
        sub_1418c57f0(arg1 + 0x3b0, 1)
        sub_1418bd350(arg1 + 0x248)
        void* rbx_15 = *(arg1 + 0x1568)
        
        if (rbx_15 != 0)
            sub_1418d36f0(rbx_15)
            j_sub_140a74f90(rbx_15)
        
        void* rbx_16 = *(arg1 + 0x1560)
        
        if (rbx_16 != 0)
            sub_1418d36f0(rbx_16)
            j_sub_140a74f90(rbx_16)
        
        void* rbx_17 = *(arg1 + 0x1558)
        
        if (rbx_17 != 0)
            sub_1418d36f0(rbx_17)
            j_sub_140a74f90(rbx_17)
        
        EnterCriticalSection(&data_143efb280)
        int64_t r14_4 = 0
        int64_t* rdi_3 = *(arg1 + 0x440)
        uint64_t r15_5 = sx.q(*(arg1 + 0x448)) << 3 u>> 3
        
        if (rdi_3 u> &rdi_3[sx.q(*(arg1 + 0x448))])
            r15_5 = 0
        
        if (r15_5 != 0)
            do
                int64_t* rbx_18 = *rdi_3
                data_143efb790(*(*(arg1 + 0x438) + 8), *rbx_18, 0)
                *rbx_18 = 0
                j_sub_140a74f90(rbx_18)
                r14_4 += 1
                rdi_3 = &rdi_3[1]
            while (r14_4 != r15_5)
        
        LeaveCriticalSection(&data_143efb280)
        *(arg1 + 0x230) = 0
        int64_t result = data_143efb6e0(*(arg1 + 8), 0)
        *(arg1 + 8) = 0
        return result
    
    data_143efbb18(*(arg1 + 8), *(*rdx_14 + rax_22 * 0x18 + 8), 0)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
