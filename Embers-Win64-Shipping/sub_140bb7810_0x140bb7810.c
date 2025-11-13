// 函数: sub_140bb7810
// 地址: 0x140bb7810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143e1a3e0)
int32_t r11 = data_1439a9758.d
int64_t* rsi = nullptr
int32_t var_a4 = 1
int64_t* var_88 = nullptr
int32_t rcx = 0
int32_t var_90 = 0
int32_t var_7c = 0
int32_t rbx = 0
int32_t var_a8 = 0
int32_t r15 = 0
void* var_a0 = &data_1439a9740
int32_t r8 = 0
int32_t var_98 = 0xffffffff
int32_t var_94 = 0

if (r11 != 0)
    void* rax_1 = data_1439a9750
    void* r10_1 = &data_1439a9740
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r10_1
    int32_t var_94_2
    
    if (rdx_3 != 0)
    label_140bb78d5:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_94_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_94_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_90_1 = rcx
            var_a8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140bb78d5
        
        var_94_2 = r11

int128_t var_38 = 0xffffffff
int32_t var_94_3 = r11
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = (&data_1439a9730).o
int96_t var_68 = var_a8.o:8.12
int64_t var_58 = temp0_3

while (true)
    int32_t var_5c
    int64_t rcx_4 = sx.q(var_5c)
    int64_t* rax_11 = var_78.q
    
    if (rcx_4.d == ((0xffffffff << (r11.b & 0x1f)).q u>> 0x20).d && var_68.q == &data_1439a9740
            && rax_11 == &data_1439a9730)
        int64_t* r11_1 = rsi
        void* r15_1 = &rsi[sx.q(rbx)]
        
        if (rsi != r15_1)
            void* rbx_1 = data_1439a9770
            void* r9_1 = data_1439a9730
            
            do
                if (data_1439a9738 != data_1439a9764)
                    int64_t r10_2 = *r11_1
                    void* rdi_2 = &data_1439a9768
                    uint32_t r8_2 = (r10_2 u>> 4).d
                    int32_t rdx_8 = (0x9e3779b9 - r8_2) ^ r8_2 << 8
                    int32_t rcx_11 = neg.d(r8_2 + rdx_8) ^ rdx_8 u>> 0xd
                    int32_t r8_5 = (r8_2 - rdx_8 - rcx_11) ^ rcx_11 u>> 0xc
                    int32_t rdx_11 = (rdx_8 - r8_5 - rcx_11) ^ r8_5 << 0x10
                    int32_t rcx_14 = (rcx_11 - rdx_11 - r8_5) ^ rdx_11 u>> 5
                    int32_t r8_8 = (r8_5 - rdx_11 - rcx_14) ^ rcx_14 u>> 3
                    int32_t rdx_14 = (rdx_11 - r8_8 - rcx_14) ^ r8_8 << 0xa
                    int64_t r14_2 = sx.q(data_1439a9778 - 1)
                    
                    if (rbx_1 != 0)
                        rdi_2 = rbx_1
                    
                    int64_t rax_37
                    
                    for (int32_t i = *(rdi_2 + (((sx.q(rcx_14 - rdx_14 - r8_8)
                            ^ zx.q(rdx_14) u>> 0xf) & r14_2) << 2)); i != 0xffffffff; 
                            i = *(r9_1 + (rax_37 << 3) + 8))
                        int64_t i_1 = sx.q(i)
                        rax_37 = i_1 * 2
                        
                        if (*(r9_1 + (rax_37 << 3)) == r10_2)
                            int64_t rdx_15 = i_1 * 2
                            int64_t rax_39 = sx.q(*(r9_1 + (rdx_15 << 3) + 0xc)) & r14_2
                            void* r8_9 = rdi_2 + (rax_39 << 2)
                            
                            for (int32_t j = *(rdi_2 + (rax_39 << 2)); j != 0xffffffff; j = *r8_9)
                                if (j == i)
                                    *r8_9 = *(r9_1 + (rdx_15 << 3) + 8)
                                    r9_1 = data_1439a9730
                                    break
                                
                                r8_9 = r9_1 + 8 + (sx.q(j) << 4)
                            
                            int32_t r8_11 = rol.d(1, i.b)
                            
                            if (data_1439a9764 != 0)
                                *(r9_1 + sx.q(data_1439a9760) * 0x10) = i
                                r9_1 = data_1439a9730
                            
                            *(r9_1 + (rdx_15 << 3)) = 0xffffffff
                            int32_t rax_45 = -1
                            
                            if (data_1439a9764 s> 0)
                                rax_45 = data_1439a9760
                            
                            *(r9_1 + (rdx_15 << 3) + 4) = rax_45
                            void* rdx_16 = &data_1439a9740
                            data_1439a9764 += 1
                            void* rax_46 = data_1439a9750
                            data_1439a9760 = i
                            
                            if (rax_46 != 0)
                                rdx_16 = rax_46
                            
                            if (i s< 0)
                                i += 0x1f
                            
                            int64_t rax_47 = sx.q(i s>> 5)
                            *(rdx_16 + (rax_47 << 2)) &= not.d(r8_11)
                            rbx_1 = data_1439a9770
                            r9_1 = data_1439a9730
                            break
                
                r11_1 = &r11_1[1]
            while (r11_1 != r15_1)
        
        if (rsi != 0)
            sub_140a74f90(rsi)
        
        return LeaveCriticalSection(&data_143e1a3e0) __tailcall
    
    void* r14_1 = *(*rax_11 + rcx_4 * 0x10)
    
    if (sub_140d3cb50(r14_1) == arg1)
        int64_t rdi_1 = sx.q(rbx)
        rbx = (rdi_1 + 1).d
        
        if (rbx s> r15)
            sub_1405a4d70(&var_88)
            r15 = var_7c
            rsi = var_88
        
        rsi[rdi_1] = r14_1
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
