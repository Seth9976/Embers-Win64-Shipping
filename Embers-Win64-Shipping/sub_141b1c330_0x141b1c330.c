// 函数: sub_141b1c330
// 地址: 0x141b1c330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_5 = arg1 + 0x10
int32_t var_8c = 1
int32_t r11 = *(i_5 + 0x28)
void* r14 = i_5 + 0x10
int32_t rcx = 0
void* i_6 = i_5
int64_t* r12 = arg3
int32_t var_90 = 0
int32_t r8 = 0
void* var_88 = r14
int32_t var_80 = 0xffffffff
int64_t var_7c = 0

if (r11 != 0)
    void* rax_1 = *(r14 + 0x10)
    void* r9_1 = r14
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141b1c3d8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_8c_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_7c.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_7c.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_7c:4.d = r8
            var_90 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_80 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141b1c3d8
        
        var_7c.d = r11

int32_t rdx_4 = *(i_5 + 0x28)
void* i_3 = i_5
double zmm2[0x2] = var_80.o
int128_t var_b0 = var_90.o
int32_t rsi = 0xffffffff << (rdx_4.b & 0x1f)
int128_t zmm0 = i_3.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
double var_a0[0x2] = zmm2
int64_t var_50 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int64_t zmm1 = var_b0:8.q
var_b0:8.d = rsi
var_b0:0xc.d = rdx_4
int128_t var_70 = zmm0

if (rdx_4 != r11)
    void* rax_11 = *(r14 + 0x10)
    void* r10_1 = r14
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_8 != 0)
    label_141b1c4a2:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_b0:0xc.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_b0:0xc.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_b0:8.d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141b1c4a2
        
        var_b0:0xc.d = r11

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t rcx_7 = var_70.q
    
    if (result.d == (var_b0:8.q u>> 0x20).d && zmm1 == r14 && rcx_7 == i_5)
        return result
    
    int32_t* rbx_3 = result * 0x1c + *rcx_7
    void*** rax_20 = sub_141b20eb0(rbx_3, arg2)
    sub_141a4a790(r12, &i_3, rbx_3, &rbx_3[4])
    void* i = i_3
    
    for (void* r12_1 = i + (sx.q(var_b0.d) << 3); i != r12_1; i += 8)
        int64_t arg_8 = *i
        void* rax_23 = sub_141a3c860(sub_140d3c6e0(&arg_8))
        
        if (rax_23 != 0)
            if (*(rax_20 + 9) != 0)
                sub_141e97be0(rax_23)
                char* j_1 = rax_20[0x156]
                char* j = &rax_20[2]
                
                if (j_1 != 0)
                    j = j_1
                
                for (void* rsi_2 = sx.q(rax_20[0x158].d) * 0x550 + j; j != rsi_2; j = &j[0x550])
                    sub_141e92f10(rax_23, j, *(j + 0x540))
            
            if (rax_20[1].b != 0)
                sub_141e97b40(rax_23)
                sub_141e92490(rax_23, &rax_20[0x15a], rax_20[0x160].d)
    
    void* rsi_3 = &rax_20[2]
    rax_20[0x160].d = 0
    void* r15 = rsi_3 + 0xab0
    *(rax_20 + 0xad0) = data_143dbb0c0
    *(rax_20 + 0xae0) = data_143dbb0d0
    *(rax_20 + 0xaf0) = data_143dbb0e0
    int32_t rcx_17 = *(rsi_3 + 0xab4)
    void* rax_25 = *(rsi_3 + 0xaa0)
    int32_t i_4 = *r15
    
    if (rcx_17 s< 0)
        void* rdi_3 = rsi_3
        
        if (rax_25 != 0)
            rdi_3 = rax_25
        
        if (i_4 != 0)
            void* rdi_4 = rdi_3 + 0x530
            int32_t i_1
            
            do
                int64_t rcx_19 = *rdi_4
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                rdi_4 += 0x550
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            rcx_17 = *(rsi_3 + 0xab4)
        
        *r15 = 0
        
        if (rcx_17 != 0)
            sub_141b309c0(rsi_3, 0)
    else
        if (rax_25 != 0)
            rsi_3 = rax_25
        
        if (i_4 != 0)
            void* rdi_2 = rsi_3 + 0x530
            int32_t i_2
            
            do
                int64_t rcx_18 = *rdi_2
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                rdi_2 += 0x550
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        *r15 = 0
    
    rax_20[1].w = 0
    int32_t var_58 = var_58 & not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)
    r14 = var_88
    i_5 = i_6
    r12 = arg3
