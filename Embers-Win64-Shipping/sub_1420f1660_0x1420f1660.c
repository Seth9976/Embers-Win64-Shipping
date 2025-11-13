// 函数: sub_1420f1660
// 地址: 0x1420f1660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t r10 = 0
int32_t rcx = 0
int32_t* r11 = &arg3[2]
void* r9 = nullptr
int32_t var_44 = arg2[0].d
void* var_c0 = nullptr
int32_t r8 = 0
int32_t var_b8 = 0
int32_t var_b4 = 4
void* var_58 = nullptr
int32_t result_1 = 0
int32_t var_4c = 4
char var_48 = 0
int32_t rdi = r11[6]
int32_t var_158 = 0
int32_t var_154 = 1
int32_t* var_150 = r11
int32_t var_148 = 0xffffffff
int64_t var_144 = 0

if (rdi != 0)
    int32_t* rax_2 = *(r11 + 0x10)
    
    if (rax_2 != 0)
        r11 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_3 = *r11
    
    if (rdx_3 != 0)
    label_1420f174b:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_154_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_144.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> rdi)
            var_144.d = rdi
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_144:4.d = r8
            var_158 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r11[rdx_4 + 1]
            var_148 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1420f174b
        
        var_144.d = rdi

int128_t var_110 = 0xffffffff
double var_120[0x2] = var_158.o
var_158.o = arg3.o
int64_t var_138 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_148.o = var_120
void var_100
void var_a8

if (0 s< rdi)
    int32_t i_3
    int32_t i = i_3
    
    do
        int64_t* rbx_1 = var_158.q
        int64_t rsi_1 = sx.q(i) * 3
        int64_t* rdi_1 = *(*rbx_1 + (rsi_1 << 3) + 8)
        char var_48_1 = 0
        (*(*rdi_1 + 8))(rdi_1, &var_a8)
        
        if (var_48_1 != 0)
            int64_t r15_1 = *rbx_1
            int64_t rbx_2 = sx.q(var_b8)
            int32_t rax_15 = (rbx_2 + 1).d
            var_b8 = rax_15
            
            if (rax_15 s> var_b4)
                sub_141104d70(&var_100, rbx_2.d)
            
            void* rcx_4 = &var_100
            
            if (var_c0 != 0)
                rcx_4 = var_c0
            
            void* rcx_5 = rcx_4 + (rbx_2 << 4)
            *rcx_5 = *(r15_1 + (rsi_1 << 3))
            *(rcx_5 + 8) = rdi_1
        
        var_144:4.d &= not.d(var_150:4.d)
        sub_14059bdd0(&var_150)
        i = i_3
    while (i s< *(var_148.q + 0x18))
    
    r10 = var_b8
    r9 = var_58

void* r12 = &var_100

if (var_c0 != 0)
    r12 = var_c0

void* r13_2 = (sx.q(r10) << 4) + r12

if (r12 != r13_2)
    do
        int64_t* r15_2 = *(r12 + 8)
        int64_t rsi_2 = sx.q(*r12)
        sub_141d54100(arg3, arg3[1].d - *(arg3 + 0x34), 0)
        int64_t rax_23 = sx.q(arg3[9].d)
        
        if (rax_23.d != 0)
            void* rcx_9 = arg3[8]
            void* r8_2 = &arg3[7]
            
            if (rcx_9 != 0)
                r8_2 = rcx_9
            
            int32_t i_1 = *(r8_2 + (((rax_23 - 1) & rsi_2) << 2))
            int32_t i_2 = i_1
            int32_t i_5 = i_1
            int32_t i_4 = i_1
            
            if (i_1 != 0xffffffff)
                int64_t r9_1 = *arg3
                
                do
                    int64_t rdx_11 = sx.q(i_2) * 3
                    i_1 = *(r9_1 + (rdx_11 << 3) + 0x10)
                    i_4 = i_1
                    i_5 = i_1
                    
                    if (*(r9_1 + (rdx_11 << 3)) == rsi_2.d)
                        break
                    
                    i_2 = i_1
                while (i_1 != 0xffffffff)
            
            while (i_2 != 0xffffffff)
                if (*(*arg3 + sx.q(i_2) * 0x18 + 8) == r15_2)
                    sub_1405c2fb0(arg3, i_2)
                    i_5 = i_4
                
                i_2 = i_5
                
                if (i_1 == 0xffffffff)
                    break
                
                int64_t r9_2 = *arg3
                
                do
                    int64_t rdx_14 = sx.q(i_2) * 3
                    i_1 = *(r9_2 + (rdx_14 << 3) + 0x10)
                    i_5 = i_1
                    
                    if (*(r9_2 + (rdx_14 << 3)) == rsi_2.d)
                        break
                    
                    i_2 = i_1
                while (i_1 != 0xffffffff)
                
                i_4 = i_1
        
        if (r15_2 != 0)
            (**r15_2)(r15_2, 1)
        
        r12 += 0x10
    while (r12 != r13_2)
    
    r10 = var_b8
    r9 = var_58

if (r10 s> 0)
    sub_141b938e0(&data_143a2e4a8, arg4, 0)
    r9 = var_58

int64_t result = sx.q(result_1)
void* rbx_3 = &var_a8

if (r9 != 0)
    rbx_3 = r9

void* r14_1 = rbx_3 + result * 0x14

if (rbx_3 != r14_1)
    do
        if (*(rbx_3 + 8) != 0xffffffff)
            result = sub_140d3c6e0(rbx_3 + 0xc)
            int64_t result_2 = result
            
            if (result != 0)
                result = sub_140d1fd20(result, *rbx_3)
                
                if (result != 0)
                    int64_t r9_3 = *result_2
                    result = (*(r9_3 + 0x210))(result_2, result, rbx_3 + 8, r9_3, var_158)
        
        rbx_3 += 0x14
    while (rbx_3 != r14_1)
    
    r9 = var_58

if (r9 != 0)
    result = sub_140a74f90(r9)

if (var_c0 != 0)
    result = sub_140a74f90(var_c0)

__security_check_cookie(rax_1 ^ &var_178)
return result
