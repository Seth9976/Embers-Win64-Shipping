// 函数: sub_140af6370
// 地址: 0x140af6370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[1].d
void* rsi = arg1

if (i_2 != 0)
    void* rbx_1 = *arg2 + 0x58
    int32_t i
    
    do
        int64_t rcx = *(rbx_1 + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *(rbx_1 - 0x18)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 - 0x28)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rbx_1 - 0x38)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_1 - 0x48)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *(rbx_1 - 0x58)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_1 += 0x88
        i = i_2
        i_2 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405a5390(arg2, 0)

int32_t r13 = 2
int32_t rbx_2 = 0x300

if (data_143de5426 != 0)
    r13 = 0xa

int32_t arg_18 = r13
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"nullrhi") != 0 || data_143de5426 != 0)
    rbx_2 = 0x200

TEB* gsbase

if (data_143db4814 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db4814)
    
    if (data_143db4814 == 0xffffffff)
        sub_140af2b60()
        data_143db4810 = sub_140b21a10(&data_143dbb3f0, u"UNATTENDED")
        _Init_thread_footer(&data_143db4814)

int32_t rax_2

if (data_143db4810 != 0 || data_143de548d != 0)
    rax_2.b = 1
else
    rax_2.b = 0

int32_t var_f4 = 1
int32_t rdi_1 = rbx_2 & 0xfffffdff
int32_t var_e8 = 0xffffffff
int64_t var_e4 = 0
int32_t rcx_10 = 0
int32_t r8 = 0

if (rax_2.b == 0)
    rdi_1 = rbx_2

int32_t var_f8 = 0
int32_t arg_20 = rdi_1
int32_t r11 = *(rsi + 0x160)
void* r9 = rsi + 0x148
void* var_f0 = r9

if (r11 != 0)
    void* rax_3 = *(r9 + 0x10)
    
    if (rax_3 != 0)
        r9 = rax_3
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_140af653b:
        int32_t rax_10 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_f4_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        var_e4.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_e4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_10)
            r8 += 0x20
            rcx_10 += 1
            var_e4:4.d = r8
            var_f8 = rcx_10
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_e8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140af653b
        
        var_e4.d = r11

double zmm2[0x2] = var_e8.o
double var_58[0x2] = zmm2
double var_68[0x2] = var_f8.o
double var_a8[0x2] = (rsi + 0x138).o
uint64_t result = zmm2[0] u>> 0x20
int64_t var_88 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (result.d s< r11)
    int32_t i_1 = var_68[1]:4.d
    
    do
        int64_t* r15_1 = *((sx.q(i_1) << 5) + *var_a8[0] + 0x10)
        int32_t rax_16 = (*(*r15_1 + 8))(r15_1)
        int32_t r14_2 = *(rsi + 0x1b0) & rax_16
        int32_t rax_17 = rax_16 & 0xf
        
        if (rax_17 == 0 || (r13 & rax_17) != 0)
            rsi.b = 1
        else
            rsi.b = 0
        
        int32_t rax_19 = rax_16 & 0x300
        
        if (rax_19 == 0 || (rax_19 & rdi_1) != 0)
            rdi_1.b = 1
        else
            rdi_1.b = 0
        
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        if ((not.b((rax_16 u>> 0x10).b) & 1) != 0 && rsi.b != 0 && rdi_1.b != 0 && r14_2 != 0)
            int64_t* var_c8 = nullptr
            int32_t var_c0_1 = 0
            sub_140af24b0(r15_1, &var_c8)
            int64_t* r13_1 = var_c8
            int64_t r15_2 = sx.q(var_c0_1)
            int64_t* rbx_6 = r13_1
            void* r14_4 = r15_2 * 0x88 + r13_1
            
            if (r13_1 != r14_4)
                do
                    int64_t rsi_1 = *rbx_6
                    uint64_t var_b8 = 0
                    int64_t var_d8 = 0
                    int32_t rdi_2 = rbx_6[1].d
                    int64_t var_b0_1 = 0
                    int32_t var_d0_1 = rdi_2
                    
                    if (rdi_2 != 0)
                        sub_1405a4c70(&var_d8, rdi_2, 0)
                        memcpy(var_d8, rsi_1, rdi_2 * 2)
                    else
                        int32_t var_cc_1 = rdi_2
                    
                    void arg_10
                    char rax_21 = sub_140af83b0(arg1, 
                        sub_140a300d0(&var_d8, &var_f8, &data_142d404d4, &data_142d40450, 1), 
                        &var_b8, &arg_10)
                    int64_t rcx_20 = var_f8.q
                    rdi_2.b = rax_21 == 0
                    
                    if (rcx_20 != 0)
                        sub_140a74f90(rcx_20)
                    
                    if (rdi_2.b != 0)
                        int64_t rdi_3 = sx.q(arg2[1].d)
                        int32_t rax_22 = (rdi_3 + 1).d
                        arg2[1].d = rax_22
                        
                        if (rax_22 s> *(arg2 + 0xc))
                            sub_1405c5340(arg2)
                        
                        sub_140ae6700(rdi_3 * 0x88 + *arg2, rbx_6)
                    
                    int64_t rcx_24 = var_d8
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                    
                    uint64_t rcx_25 = var_b8
                    
                    if (rcx_25 != 0)
                        sub_140a74f90(rcx_25)
                    
                    rbx_6 = &rbx_6[0x11]
                while (rbx_6 != r14_4)
                
                r13_1 = var_c8
            
            if (r15_2.d != 0)
                void* rbx_7 = &r13_1[0xb]
                int32_t j
                
                do
                    int64_t rcx_26 = *(rbx_7 + 0x10)
                    
                    if (rcx_26 != 0)
                        sub_140a74f90(rcx_26)
                    
                    int64_t rcx_27 = *rbx_7
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
                    
                    int64_t rcx_28 = *(rbx_7 - 0x18)
                    
                    if (rcx_28 != 0)
                        sub_140a74f90(rcx_28)
                    
                    int64_t rcx_29 = *(rbx_7 - 0x28)
                    
                    if (rcx_29 != 0)
                        sub_140a74f90(rcx_29)
                    
                    int64_t rcx_30 = *(rbx_7 - 0x38)
                    
                    if (rcx_30 != 0)
                        sub_140a74f90(rcx_30)
                    
                    int64_t rcx_31 = *(rbx_7 - 0x48)
                    
                    if (rcx_31 != 0)
                        sub_140a74f90(rcx_31)
                    
                    int64_t rcx_32 = *(rbx_7 - 0x58)
                    
                    if (rcx_32 != 0)
                        sub_140a74f90(rcx_32)
                    
                    rbx_7 += 0x88
                    j = r15_2.d
                    r15_2 = zx.q(r15_2.d - 1)
                while (j != 1)
            
            if (r13_1 != 0)
                sub_140a74f90(r13_1)
            
            r13 = arg_18
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        var_68[1].d &= not.d(var_a8[1]:4.d)
        sub_14059bdd0(&var_a8[1])
        result = var_68[0]
        i_1 = var_68[1]:4.d
        rsi = arg1
        rdi_1 = arg_20
    while (i_1 s< *(result + 0x18))

return result
