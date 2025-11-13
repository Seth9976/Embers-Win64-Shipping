// 函数: sub_140bde920
// 地址: 0x140bde920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = data_1439a9b68
int32_t var_9c = 1
void* var_98 = &data_1439a9b50
int32_t r10 = arg1
uint32_t r9_1
r9_1.b = (arg1 u>> 0x11).b | (arg1 u>> 6).b
int32_t var_90 = 0xffffffff
r9_1.b = not.b(r9_1.b)
int64_t var_8c = 0
r9_1.b &= 1
int64_t var_78 = r11
int64_t r13
r13.b = 0
uint32_t var_a8 = r9_1
int32_t rcx = 0
int32_t var_a0 = 0
int32_t r8 = 0

if (r11.d != 0)
    void* rax_2 = data_1439a9b60
    void* r9_2 = &data_1439a9b50
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((r11 - 1).d)
    int32_t rdx_2 = *r9_2
    
    if (rdx_2 != 0)
    label_140bde9fa:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_9c_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_8c.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11.d)
            var_8c.d = r11.d
    else
        while (true)
            int64_t rax_5 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_8c:4.d = r8
            var_a0 = rcx
            
            if (rax_5.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r9_2 + (rax_5 << 2) + 4)
            var_90 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140bde9fa
        
        var_8c.d = r11.d
    
    r10 = arg1
    r9_1 = var_a8

int128_t var_60 = var_a0.o
TEB* gsbase
void* r8_2 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
int128_t var_50 = 0xffffffff
void* var_70 = r8_2
var_a0.o = (&data_1439a9b40).o
int128_t var_58
var_90.o = var_58
int64_t var_80 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

while (true)
    int32_t var_84
    int64_t rax_12 = sx.q(var_84)
    int64_t rcx_3 = var_a0.q
    
    if (rax_12.d == r11.d && var_90.q == &data_1439a9b50 && rcx_3 == &data_1439a9b40)
        return zx.q(r13.b)
    
    int32_t* rdi_3 = rax_12 * 0x60 + *rcx_3
    int32_t r15_1 = *rdi_3
    int32_t rcx_5 = r15_1 & 0x30000
    
    if ((zx.d(r15_1.w) & zx.d(r10.w)) != 0 && rcx_5 == (r10 & 0x30000))
    label_140bdeaf1:
        int64_t rbx_1
        
        if (test_bit(r15_1, 0x12))
            if (data_143e1abc0 s> *(0x14 + *r8_2))
                _Init_thread_header(&data_143e1abc0)
                
                if (data_143e1abc0 == 0xffffffff)
                    sub_140b58260(&data_143e1abb8, u"*SUBSTRING*", 1)
                    _Init_thread_footer(&data_143e1abc0)
            
            rbx_1 = data_143e1abb8
        else if ((r15_1.b & 0x40) == 0)
            rbx_1 = *arg2
        else
            rbx_1 = *(arg2 + 0x10)
        
        int64_t* rdx_7
        
        if (rdi_3[4] == rdi_3[0xf])
        label_140bdeb8e:
            rdx_7 = nullptr
        else
            int32_t rax_21 = sub_140b5ead0(rbx_1.d)
            void* r9_3 = &rdi_3[0x10]
            void* rcx_8 = *(r9_3 + 8)
            
            if (rcx_8 != 0)
                r9_3 = rcx_8
            
            int32_t rax_25 = *(r9_3 + (((sx.q(rdi_3[0x14]) - 1) & sx.q(rbx_1:4.d + rax_21)) << 2))
            
            if (rax_25 == 0xffffffff)
            label_140bdeb8e_1:
                rdx_7 = nullptr
            else
                while (true)
                    rdx_7 = (sx.q(rax_25) << 5) + *(rdi_3 + 8)
                    
                    if (*rdx_7 == rbx_1)
                        break
                    
                    rax_25 = rdx_7[3].d
                    
                    if (rax_25 == 0xffffffff)
                        goto label_140bdeb8e_2
                
                if (rax_25 == 0xffffffff)
                label_140bdeb8e_2:
                    rdx_7 = nullptr
        
        void* rax_26 = &rdx_7[1]
        
        if (rdx_7 == 0)
            rax_26 = nullptr
        
        if (rax_26 != 0)
            int32_t* i = *rax_26
            
            for (void* r14_3 = &i[sx.q(*(rax_26 + 8)) * 0x28]; i != r14_3; i = &i[0x28])
                int32_t rax_28 = *i
                
                if (r15_1 == rax_28 && sub_140be2f90(&i[1], arg2, (rax_28 u>> 0x12).b & 1) != 0)
                    int64_t rdi_4 = sx.q(arg3[1].d)
                    r13.b = 1
                    int32_t rax_31 = (rdi_4 + 1).d
                    arg3[1].d = rax_31
                    
                    if (rax_31 s> *(arg3 + 0xc))
                        sub_1405a4d70(arg3)
                    
                    *(*arg3 + (rdi_4 << 3)) = i
    else if (r9_1.b != 0 && ((r15_1 u>> 6).b & 1) != 0 && rcx_5 == 0)
        goto label_140bdeaf1
    
    var_8c:4.d &= not.d(var_98:4.d)
    sub_14059bdd0(&var_98)
    r9_1 = var_a8
    r11 = var_78
    r10 = arg1
    r8_2 = var_70
