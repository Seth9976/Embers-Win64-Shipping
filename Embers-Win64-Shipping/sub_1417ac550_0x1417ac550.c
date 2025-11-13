// 函数: sub_1417ac550
// 地址: 0x1417ac550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t var_38 = __security_cookie ^ &var_178
int64_t* rcx = *arg1
char rax_3 = (*(*rcx + 0x10))(rcx)
int64_t* r10 = arg1[1]
uint64_t r15
r15.b = 0
int32_t rbx = r10[5].d
void* r13 = &r10[2]
char var_148 = rax_3
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x80)
int32_t rcx_1 = 0
int32_t r8 = 0
int64_t* var_140 = r10
int32_t var_138 = 0
int32_t var_134 = 1
void* var_130 = r13
int32_t var_128 = 0xffffffff
int64_t var_124 = 0

if (rbx != 0)
    void* rax_4 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1417ac66b:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_134_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_124.d = r8 - rax_12 + 0x1f
        
        if (r8 - rax_12 + 0x1f s> rbx)
            var_124.d = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_124:4.d = r8
            var_138 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_128 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1417ac66b
        
        var_124.d = rbx

int32_t rdx_5 = r10[5].d
double zmm2[0x2] = var_128.o
double var_c8[0x2] = zmm2
int32_t r14 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_d8 = var_138.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_e8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_128_1 = r14
var_124.d = rdx_5
int128_t var_108 = r10.o
int128_t var_f8 = var_d8

if (rdx_5 != rbx)
    void* rax_14 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_14 != 0)
        r10_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_9 != 0)
    label_1417ac743:
        int32_t rax_21 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
        int32_t r11_1
        
        if (rax_21 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_124.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_124.d = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_128_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1417ac743
        
        var_124.d = rbx
    
    r10 = var_140

while (true)
    int64_t rax_23 = sx.q(var_f8:0xc.d)
    int64_t* rdx_10 = var_108.q
    int64_t* var_110
    
    if (rax_23.d == (var_128_1.q u>> 0x20).d && var_f8.q == r13 && rdx_10 == r10)
        r14.b = 0
        int64_t var_b0
        void* rdi_3 = &var_b0:4
        
        do
            if (*(rdi_3 - 4) != 0)
                void* rax_50 = *(rdi_3 - 0xc)
                int32_t r8_7 = 0
                *(rdi_3 - 0xc) = 0
                int64_t rdx_23 = sx.q(*(rdi_3 - 4))
                void* r9_8 = (rdx_23 << 4) + rax_50
                var_138.q = rax_50
                var_130.d = rdx_23.d
                var_130:4.d = *rdi_3
                *(rdi_3 - 4) = 0
                int32_t var_128_2 = 0
                
                while (rax_50 != r9_8)
                    void* rcx_27 = *(rax_50 + 8)
                    int32_t rdx_24
                    
                    if (rcx_27 == 0)
                        rdx_24 = *(*rax_50 + 0x18)
                    else
                        rdx_24 = *(rcx_27 + 8)
                    
                    r8_7 += rdx_24
                    rax_50 += 0x10
                    int32_t var_128_3 = r8_7
                
                int64_t* rcx_29 = *arg1
                uint16_t rbx_3 = zx.w(r14.b)
                (*(*rcx_29 + 8))(rcx_29, &var_140, &var_138, zx.q(rbx_3), arg1[4].b)
                int64_t* rcx_30 = var_140
                r15 = zx.q(r15.b)
                
                if ((*(*rcx_30 + 8))(rcx_30) == 0)
                    r15 = 1
                
                int64_t* rcx_31 = *arg1[2]
                (*(*rcx_31 + 0x70))(rcx_31, &var_148, &var_140, zx.q(rbx_3))
                int64_t* rcx_32 = var_140
                
                if (rcx_32 != 0)
                    (**rcx_32)(rcx_32, 1)
                
                int64_t rcx_33 = var_138.q
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
            
            r14.b += 1
            rdi_3 += 0x10
        while (r14.b u< 8)
        
        void** result = arg1[2]
        rdx_10.b = r15.b == 0
        *(*result + 0x11) = rdx_10.b
        
        if (r15.b == 0 && *(arg1 + 0x21) == r15.b)
            int64_t* rcx_35 = *arg1[2]
            int64_t** rax_59 = (*(*rcx_35 + 0x58))(rcx_35, &var_110)
            int64_t* rcx_36 = *rax_59
            *rax_59 = nullptr
            result = arg1[3]
            
            if (result != &var_140)
                int64_t* r8_10 = *result
                *result = rcx_36
                
                if (r8_10 != 0)
                    result = (**r8_10)(r8_10, 1)
            else if (rcx_36 != 0)
                result = (**rcx_36)(rcx_36, 1)
            
            int64_t* rcx_37 = var_110
            
            if (rcx_37 != 0)
                result = (**rcx_37)(rcx_37, 1)
        
        int64_t i = 8
        int64_t* rdi_4 = &var_38
        
        do
            int64_t rcx_38 = rdi_4[-2]
            rdi_4 = &rdi_4[-2]
            i -= 1
            
            if (rcx_38 != 0)
                result = sub_140a74f90(rcx_38)
        while (i != 0)
        
        __security_check_cookie(var_38 ^ &var_178)
        return result
    
    int64_t rcx_8 = rax_23 * 3
    int64_t rax_24 = *rdx_10
    r14 = zx.d(*(rax_24 + (rcx_8 << 3)))
    int64_t rdi_1 = *(rax_24 + (rcx_8 << 3) + 8)
    int32_t rdx_12 = 1 << (r14.b & 7) & zx.d(var_148)
    char r8_4 = r14.b
    char rax_26 = r14.b
    
    if (rdx_12 != 0)
        rax_26 = r8_4
    
    char rbx_1 = r8_4 & 7
    
    if (rdx_12 == 0)
        rbx_1 = 0
    
    int64_t* rcx_11 = *arg1[2]
    int64_t rax_29 = (*(*rcx_11 + 0x80))(rcx_11, zx.q(r14.w))
    char rax_33
    
    if (rax_29 != 0)
        int64_t* rcx_12 = *arg1[2]
        int64_t* rax_32 = (*(*rcx_12 + 0x80))(rcx_12, zx.q(r14.w))
        int64_t rdx_15 = *rax_32
        rax_33 = (*(rdx_15 + 8))(rax_32, rdx_15)
    
    if (rax_29 == 0 || rax_33 != 0)
        var_138.q = rdi_1
        var_130 = nullptr
        void* rbx_2 = &(&var_b8)[zx.q(rbx_1) * 2]
        int64_t rdi_2 = sx.q(*(rbx_2 + 8))
        int32_t rax_43 = (rdi_2 + 1).d
        *(rbx_2 + 8) = rax_43
        
        if (rax_43 s> *(rbx_2 + 0xc))
            sub_1405a4f90(rbx_2)
        
        *(*rbx_2 + rdi_2 * 0x10) = var_138.o
        int64_t* r9_5 = *arg1[2]
        
        if ((r9_5[2].b & (1 << (rax_26 & 7)).b) != 0)
            (*(*r9_5 + 0x78))(r9_5, &var_110, zx.q(r14.w))
            int64_t* rcx_24 = var_110
            
            if (rcx_24 != 0)
                (**rcx_24)(rcx_24, 1)
    else
        int64_t* rcx_14 = *arg1[2]
        int64_t* rax_36 = (*(*rcx_14 + 0x80))(rcx_14, zx.q(r14.w))
        int64_t r8_5 = *rax_36
        (*(r8_5 + 0x10))(rax_36, zx.q(arg1[4].b), r8_5)
        int64_t* rcx_16 = *arg1[2]
        int64_t* rax_39 = (*(*rcx_16 + 0x80))(rcx_16, zx.q(r14.w))
        int64_t rdx_19 = *rax_39
        
        if ((*(rdx_19 + 8))(rax_39, rdx_19) == 0)
            r15.b = 1
    
    var_f8:8.d &= not.d(var_108:0xc.d)
    sub_14059bdd0(&var_108:8)
    r10 = var_140
