// 函数: sub_1403fd0d0
// 地址: 0x1403fd0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
int32_t var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int128_t zmm7 = 0xbe800000
uint64_t i_5 = zx.q(arg2)
int32_t var_c4 = arg3
void* rbx = arg1
int32_t i_6 = i_5.d
int128_t zmm0
zmm0.d = 0.5f f- arg10

if (not(-0.25f f> zmm0.d))
    zmm7 = zmm0

zmm7.d = zmm7.d f* 0.0399999991f
int64_t rdx = sx.q(i_5.d)
int64_t rsi = rdx << 2
int64_t rax_2 = rsi + 0xf

if (rax_2 u<= rsi)
    rax_2 = 0xffffffffffffff0

int64_t rax_3 = rax_2 & 0xfffffffffffffff0
__chkstk(rax_3)
int64_t rcx = *(arg1 + 0x20)
int32_t r15 = arg8
void var_e8
void* rsp = &var_e8 - rax_3
int32_t rdx_2 = sx.d(*(rcx + (rdx << 1))) - sx.d(*(rcx + (rdx << 1) - 2))
int64_t rcx_3 = sx.q(rdx_2 << r15.b) << 2
int64_t rax_7 = rcx_3 + 0xf

if (rax_7 u<= rcx_3)
    rax_7 = 0xffffffffffffff0

int64_t rax_8 = rax_7 & 0xfffffffffffffff0
__chkstk(rax_8)
void* rsp_1 = rsp - rax_8
void* rdi = rsp_1 + 0x20
void* var_88 = rdi
int64_t rax_10 = sx.q(rdx_2 << r15.b) << 2
int64_t rcx_5 = rax_10 + 0xf

if (rcx_5 u<= rax_10)
    rcx_5 = 0xffffffffffffff0

int64_t rcx_6 = rcx_5 & 0xfffffffffffffff0
__chkstk(rcx_6)
void* rsp_2 = rsp_1 - rcx_6
int64_t rax_12 = rsi + 0xf

if (rax_12 u<= rsi)
    rax_12 = 0xffffffffffffff0

int64_t rax_13 = rax_12 & 0xfffffffffffffff0
__chkstk(rax_13)
void* rsp_3 = rsp_2 - rax_13
int64_t rax_15 = rsi + 0xf

if (rax_15 u<= rsi)
    rax_15 = 0xffffffffffffff0

int64_t rax_16 = rax_15 & 0xfffffffffffffff0
__chkstk(rax_16)
uint64_t j_6 = 0
*arg9 = 0
int32_t var_bc
uint64_t i_3

if (i_5.d s> 0)
    int32_t r11_1 = arg11
    int32_t r10_1 = 0
    
    if (arg3 != 0)
        r10_1 = r15
    
    i_3 = i_5
    int32_t r9 = arg7
    int32_t var_b0_1 = r10_1
    void* rsi_1 = nullptr
    void* var_78_1 = nullptr
    void* var_90_1 = rsp + 0x20
    uint64_t i
    
    do
        int64_t r8 = *(rbx + 0x20)
        int32_t r14_1 = 0
        int32_t rdx_5 = sx.d(*(rsi_1 + r8 + 2)) - sx.d(*(rsi_1 + r8))
        int32_t r12_2 = rdx_5 << r15.b
        int64_t j = 0
        int32_t rax_20
        rax_20.b = rdx_5 == 1
        int64_t rbx_1 = sx.q(r12_2)
        var_c8 = r12_2
        var_bc = rax_20
        
        if (rbx_1 s>= 4)
            void* r10_2 = rdi + 8
            int64_t r9_2 = sx.q(r9) * sx.q(r11_1)
            
            do
                r10_2 += 0x10
                *(r10_2 - 0x18) = *(arg6 + ((sx.q(sx.d(*(rsi_1 + r8)) << r15.b) + j + r9_2) << 2))
                *(r10_2 - 0x14) =
                    *(arg6 + ((sx.q(sx.d(*(rsi_1 + r8)) << r15.b) + j + r9_2) << 2) + 4)
                *(r10_2 - 0x10) =
                    *(arg6 + ((sx.q(sx.d(*(rsi_1 + r8)) << r15.b) + j + r9_2) << 2) + 8)
                int64_t rcx_23 = sx.q(sx.d(*(rsi_1 + r8)) << r15.b) + j
                j += 4
                *(r10_2 - 0xc) = *(arg6 + ((rcx_23 + r9_2) << 2) + 0xc)
            while (j s< rbx_1 - 3)
            
            rdi = var_88
            r10_1 = var_b0_1
            r11_1 = arg11
            r9 = arg7
        
        if (j s< rbx_1)
            do
                int64_t rcx_27 = sx.q(sx.d(*(rsi_1 + r8)) << r15.b) + j
                j += 1
                *(rdi + (j << 2) - 4) = *(arg6 + ((rcx_27 + sx.q(r9) * sx.q(r11_1)) << 2))
            while (j s< rbx_1)
            
            r12_2 = var_c8
        
        int128_t zmm0_1 = sub_1403fbca0(rdi, r12_2, r10_1, zmm7.d)
        arg3 = var_c4
        int32_t rsi_2 = var_bc
        zmm6 = zmm0_1
        
        if (arg3 != 0 && rsi_2 == 0)
            int64_t r9_5 = 0
            
            if (rbx_1 s>= 4)
                void* rcx_30 = rsp_2 + 0x24
                int64_t rdx_8 = rdi - (rsp_2 + 0x20)
                int64_t j_5 = ((rbx_1 - 4) u>> 2) + 1
                r9_5 = j_5 << 2
                int64_t j_1
                
                do
                    int32_t rax_38 = *(rdx_8 + rcx_30 - 4)
                    rcx_30 += 0x10
                    *(rcx_30 - 0x14) = rax_38
                    *(rcx_30 - 0x10) = *(rdx_8 + rcx_30 - 0x10)
                    *(rcx_30 - 0xc) = *(rdx_8 + rcx_30 - 0xc)
                    *(rcx_30 - 8) = *(rdx_8 + rcx_30 - 8)
                    j_1 = j_5
                    j_5 -= 1
                while (j_1 != 1)
            
            if (r9_5 s< rbx_1)
                int32_t* rcx_31 = rsp_2 + 0x20 + (r9_5 << 2)
                int64_t j_4 = rbx_1 - r9_5
                int64_t j_2
                
                do
                    int32_t rax_42 = *(rcx_31 + rdi - (rsp_2 + 0x20))
                    rcx_31 = &rcx_31[1]
                    rcx_31[-1] = rax_42
                    j_2 = j_4
                    j_4 -= 1
                while (j_2 != 1)
            
            char rcx_32 = r15.b
            sub_140405650(rsp_2 + 0x20, r12_2 s>> rcx_32, 1 << rcx_32)
            int128_t zmm0_2 = sub_1403fbca0(rsp_2 + 0x20, r12_2, r15 + 1, zmm7.d)
            arg3 = var_c4
            
            if (not(zmm6.d f<= zmm0_2.d))
                zmm6 = zmm0_2
                r14_1 = -1
        
        int32_t rbx_2 = 0
        int32_t rsi_3 = r15 - 1
        
        while (true)
            int32_t rax_43
            
            if (arg3 != 0 || sx.q(rsi_2) != 0)
                rax_43 = 0
            else
                rax_43 = 1
            
            if (rbx_2 s>= rax_43 + r15)
                break
            
            int32_t rdi_2 = rsi_3
            
            if (arg3 == 0)
                rdi_2 = rbx_2 + 1
            
            char rcx_35 = rbx_2.b
            sub_140405650(var_88, var_c8 s>> rcx_35, 1 << rcx_35)
            rdi = var_88
            int128_t zmm0_3 = sub_1403fbca0(rdi, var_c8, rdi_2, zmm7.d)
            
            if (not(zmm6.d f<= zmm0_3.d))
                zmm6 = zmm0_3
                r14_1 = rbx_2 + 1
            
            arg3 = var_c4
            rbx_2 += 1
            rsi_3 -= 1
        
        if (arg3 == 0)
            r14_1 = neg.d(r14_1)
        
        r10_1 = var_b0_1
        int32_t r14_2 = r14_1 * 2
        *var_90_1 = r14_2
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(r14_2)
        *arg9 += r10_1 - ((temp8_1 - temp7_1) s>> 1)
        
        if (var_bc != 0)
            int32_t rcx_40 = *var_90_1
            int32_t rax_51
            
            if (rcx_40 != 0)
                rax_51 = neg.d(r15)
            
            if (rcx_40 == 0 || rcx_40 == rax_51 * 2)
                *var_90_1 = rcx_40 - 1
        
        r11_1 = arg11
        rbx = arg1
        rsi_1 = var_78_1 + 2
        i = i_3
        i_3 -= 1
        var_90_1 += 4
        r9 = arg7
        var_78_1 = rsi_1
    while (i != 1)
    i_5 = zx.q(i_6)

var_c8 = 0
int32_t rbx_3 = arg5
int64_t i_1 = 0

if (arg3 != 0)
    rbx_3 = 0

do
    int32_t r11_3 = j_6.d
    int32_t r10_4 = rbx_3
    
    if (i_5.d s> 1)
        j_6 = zx.q((i_5 - 1).d)
        int64_t rax_55 = i_1 + ((sx.q(arg3) + (sx.q(r15) << 1)) << 1)
        void* rsi_6 = rsp + 0x24
        uint64_t j_3
        
        do
            int32_t rcx_43 = *rsi_6
            int32_t r8_8 = r10_4 + arg5
            int32_t rax_56 = r11_3 + arg5
            rsi_6 += 4
            
            if (r11_3 s< r8_8)
                r8_8 = r11_3
            
            if (rax_56 s< r10_4)
                r10_4 = rax_56
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rcx_43 - sx.d(*(&data_1435fd670 + (rax_55 << 1))) * 2)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rcx_43 - sx.d(*((rax_55 << 1) + 0x1435fd671)) * 2)
            r11_3 = (temp1_1 ^ temp0_1) - temp0_1 + r8_8
            r10_4 += (temp3_1 ^ temp2_1) - temp2_1
            j_3 = j_6
            j_6 -= 1
        while (j_3 != 1)
        r15 = arg8
        arg3 = var_c4
        i_5 = zx.q(i_6)
    
    if (r11_3 s< r10_4)
        r10_4 = r11_3
    
    i_1 += 1
    (&var_bc)[i_1] = r10_4
while (i_1 s< 2)

int32_t r10_8 = var_c8

if (i_3:4.d s< i_3.d)
    if (arg3 != 0)
        r10_8 = 1
    
    var_c8 = r10_8

int32_t i_7 = i_6
int32_t r9_9 = j_6.d

if (i_7 s> 1)
    uint64_t i_4 = zx.q(i_7 - 1)
    int64_t r15_3 = sx.q(r10_8) + ((sx.q(arg3) + (sx.q(r15) << 1)) << 1)
    void* rsi_8 = rsp_3 + 0x20 - (rsp_3 - rax_16 + 0x20)
    int32_t* rcx_48 = rsp + 0x20 - (rsp_3 - rax_16 + 0x20)
    int32_t* r10_9 = rsp_3 - rax_16 + 0x24
    int32_t* var_a8_1 = rcx_48
    uint64_t i_2
    
    do
        int32_t rdi_3 = rbx_3 + arg5
        
        if (r9_9 s>= rdi_3)
            *(rsi_8 + r10_9) = 1
        else
            rdi_3 = r9_9
            *(rsi_8 + r10_9) = j_6.d
        
        int32_t r11_7 = r9_9 + arg5
        
        if (r11_7 s>= rbx_3)
            r11_7 = rbx_3
            *r10_9 = 1
        else
            *r10_9 = j_6.d
        
        int32_t r8_9 = *(rcx_48 + r10_9)
        r10_9 = &r10_9[1]
        int32_t temp11_1
        int32_t temp12_1
        temp11_1:temp12_1 = sx.q(r8_9 - sx.d(*(&data_1435fd670 + (r15_3 << 1))) * 2)
        rcx_48 = var_a8_1
        int32_t temp13_1
        int32_t temp14_1
        temp13_1:temp14_1 = sx.q(r8_9 - sx.d(*((r15_3 << 1) + 0x1435fd671)) * 2)
        r9_9 = (temp12_1 ^ temp11_1) - temp11_1 + rdi_3
        rbx_3 = (temp14_1 ^ temp13_1) - temp13_1 + r11_7
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    r10_8 = var_c8
    i_7 = i_6

int32_t rax_70
rax_70.b = r9_9 s>= rbx_3
*(rsi + arg4 - 4) = rax_70
int64_t r8_11 = sx.q(i_7 - 2)

if (i_7 - 2 s>= 0)
    void* rax_73 = rsp_3 + 0x20 - (rsp_3 - rax_16 + 0x20)
    int32_t* r9_14 = arg4 - (rsp_3 - rax_16 + 0x20)
    int32_t* rdx_24 = rsp_3 - rax_16 + 0x24 + (r8_11 << 2)
    void* var_a0_1 = rax_73
    int64_t temp9_1
    
    do
        if (*(r9_14 + rdx_24) != 1)
            *(r9_14 + rdx_24 - 4) = *(rdx_24 + rax_73)
        else
            *(r9_14 + rdx_24 - 4) = *rdx_24
            rax_73 = var_a0_1
        
        rdx_24 -= 4
        temp9_1 = r8_11
        r8_11 -= 1
    while (temp9_1 - 1 s>= 0)

__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(r10_8)
