// 函数: sub_141814510
// 地址: 0x141814510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int32_t rbx_3 = arg2[1].d - *(arg1 + 0x34) - *(arg2 + 0x34) + rdi

if (rbx_3 s> rdi - *(arg1 + 0x34))
    sub_140976540(arg1, rbx_3)
    int32_t rdx_2
    
    if (rbx_3 u< 4)
        rdx_2 = 1
    else
        uint32_t rbx_4 = rbx_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_4 + 8)
        int32_t rcx
        
        if (rbx_4 == 0xfffffff8)
            rcx = 0x20
        else
            rcx = 0x1f - temp0_2
        
        int32_t rcx_2 = rcx << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_4 + 7)
        char rdx_1
        
        if (rcx_2 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((not.d(rcx_2)).b & (0x20 - rdx_1))
    
    int32_t rax_5 = arg1[9].d
    
    if (rax_5 == 0 || rax_5 s< rdx_2)
        arg1[9].d = rdx_2
        sub_1405a4480(arg1)

int32_t r10 = arg2[5].d
void* result_1 = &arg2[2]
int32_t var_94 = 1
void* result_2 = result_1
int32_t rcx_6 = 0
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int32_t rdi_2 = 0
int64_t var_84 = 0

if (r10 != 0)
    void* result_5 = *(result_1 + 0x10)
    void* result_3 = result_1
    
    if (result_5 != 0)
        result_3 = result_5
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_5 = *result_3
    
    if (rdx_5 != 0)
    label_141814644:
        int32_t rax_11 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_11)
        int32_t var_94_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_4
        
        var_84.d = rdi_2 - rax_12 + 0x1f
        
        if (rdi_2 - rax_12 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rax_8 = sx.q(rcx_6)
            rdi_2 += 0x20
            rcx_6 += 1
            var_84:4.d = rdi_2
            var_98 = rcx_6
            
            if (rax_8.d s>= ((temp1_1 & 0x1f) + temp2_1) s>> 5)
                break
            
            rdx_5 = *(result_3 + (rax_8 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141814644
        
        var_84.d = r10

int32_t rdx_6 = arg2[5].d
var_84.d = rdx_6
int32_t r11 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t rdi_5 = rdx_6 s>> 5
int32_t rcx_11 = rdx_6 & 0xffffffe0
int32_t var_88_2 = r11
int128_t var_38 = 0xffffffff
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = arg2.o
int96_t var_68 = var_48:8.12

if (rdx_6 != r10)
    void* result_6 = *(result_1 + 0x10)
    void* result_4 = result_1
    
    if (result_6 != 0)
        result_4 = result_6
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_10 = *(result_4 + (sx.q(rdi_5) << 2)) & r11
    
    if (rdx_10 != 0)
    label_14181470e:
        int32_t rax_20 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_4
        int32_t temp0_6
        temp0_6, rflags_4 = _bit_scan_reverse(rax_20)
        int32_t r15_1
        
        if (rax_20 == 0)
            r15_1 = 0x20
        else
            r15_1 = 0x1f - temp0_6
        
        var_84.d = rcx_11 - r15_1 + 0x1f
        
        if (rcx_11 - r15_1 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rax_17 = sx.q(rdi_5)
            rcx_11 += 0x20
            rdi_5 += 1
            
            if (rax_17.d s>= ((temp3_1 & 0x1f) + temp4_1) s>> 5)
                break
            
            rdx_10 = *(result_4 + (rax_17 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_14181470e
        
        var_84.d = r10

while (true)
    int32_t i_1
    int64_t i_2 = sx.q(i_1)
    int64_t* rdx_12 = var_78.q
    
    if (i_2.d == (var_88_2.q u>> 0x20).d && var_68.q == result_1 && rdx_12 == arg2)
        void* result = zx.q(arg2[1].d)
        
        if (result.d != *(arg2 + 0x34))
            sub_1407453e0(&var_78, arg2)
            
            for (int32_t i = i_1; i s< *(var_68.q + 0x18); i = i_1)
                int64_t rcx_18 = *(*var_78.q + sx.q(i) * 0x18)
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                var_68:8.d &= not.d(var_78:0xc.d)
                sub_14059bdd0(&var_78:8)
            
            arg2[1].d = 0
            
            if (*(arg2 + 0xc) s<= 0xffffffff)
                sub_1405a5130(arg2, 0)
            
            void* r14_1 = result_1 + 0x18
            arg2[6].d = 0xffffffff
            *(arg2 + 0x34) = 0
            result = *(result_1 + 0x10)
            uint64_t rcx_23 = zx.q((*r14_1 + 0x1f) u>> 5)
            
            if (result != 0)
                result_1 = result
            
            if (rcx_23.d u> 8)
                result = memset(result_1, 0, zx.q(rcx_23.d) << 2)
            else if (rcx_23.d != 0)
                result = nullptr
                __builtin_memset(result_1, 0, rcx_23 << 2)
            
            *r14_1 = 0
            void* rdi_9 = &arg2[7]
            int64_t rcx_25 = sx.q(arg2[9].d)
            void* rdx_16 = *(rdi_9 + 8)
            
            if (rcx_25 s> 0)
                result = 0xffffffff
                
                if (rdx_16 != 0)
                    rdi_9 = rdx_16
                
                __builtin_memset(rdi_9, 0xffffffff, rcx_25 << 2)
        
        return result
    
    void arg_8
    sub_140a5cad0(arg1, &arg_8, *rdx_12 + i_2 * 0x18, nullptr)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
