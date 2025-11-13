// 函数: sub_14084dbf0
// 地址: 0x14084dbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_50

if ((*(arg1 + 0x6b8) & 0x20) != 0)
    void* rbx_1 = *(arg1 + 0x6f0)
    
    if (sub_14074a210(*(rbx_1 + 0x14)) != 0)
        int64_t rsi_1 = *(arg1 + 0xe0)
        int64_t var_b0_1 = rsi_1
        int32_t var_b8
        var_b8.q = rbx_1
        char rax_2 = sub_140a80f40()
        
        if (rax_2 != 0)
            sub_1408345c0(rbx_1, rsi_1)
        else if (data_143f138f4 != rax_2)
        label_14084dc8e:
            int64_t* rax_4 = sub_14084cef0(&var_50, nullptr, 0xff)
            *(*rax_4 + 0x10) = var_b8.o
            void* rcx_4 = *rax_4
            int32_t r8_1 = rax_4[2].d
            int64_t* rdx_2 = rax_4[1]
            int64_t* rbx_2 = *(rcx_4 + 0x28)
            int64_t* arg_10 = rbx_2
            int32_t* rsi_2 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rsi_2 += 1
                rbx_2 = arg_10
            
            sub_1405e48c0(rcx_4, rdx_2, r8_1, 1)
            
            if (rbx_2 != 0)
                int32_t rax_5 = *rsi_2
                *rsi_2 -= 1
                
                if (rax_5 == 1)
                    sub_140a2f6e0(arg_10)
        else if (data_143de5480 == rax_2)
            sub_1408345c0(rbx_1, rsi_1)
        else
            uint32_t rax_3
            rax_3.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_3.b == 0)
                goto label_14084dc8e
            
            sub_1408345c0(rbx_1, rsi_1)

int32_t rcx_6 = 0
int32_t var_b4 = 1
int32_t var_b8_1 = 0
int32_t rbx_3 = *(arg1 + 0x128)
int32_t r8_2 = 0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (rbx_3 != 0)
    void* rax_6 = *(arg1 + 0x120)
    void* r9_2 = arg1 + 0x110
    
    if (rax_6 != 0)
        r9_2 = rax_6
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbx_3 - 1)
    int32_t rdx_5 = *r9_2
    
    if (rdx_5 != 0)
    label_14084dd68:
        int32_t rax_13 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
        int32_t var_b4_1 = rax_13
        int32_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0x20
        else
            rax_14 = 0x1f - temp0_2
        
        var_a4.d = r8_2 - rax_14 + 0x1f
        
        if (r8_2 - rax_14 + 0x1f s> rbx_3)
            var_a4.d = rbx_3
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_6)
            r8_2 += 0x20
            rcx_6 += 1
            var_a4:4.d = r8_2
            var_b8_1 = rcx_6
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_2 + (rdx_6 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14084dd68
        
        var_a4.d = rbx_3

int32_t rdx_7 = *(arg1 + 0x128)
var_50 = arg1 + 0x100
int128_t var_48 = var_b8_1.o
int32_t r12 = 0xffffffff << (rdx_7.b & 0x1f)
int128_t zmm0 = var_50.o
int32_t r8_5 = rdx_7 s>> 5
int32_t r9_4 = rdx_7 & 0xffffffe0
int32_t var_60 = r12
int32_t var_5c = rdx_7
int128_t var_38 = 0xffffffff
int64_t var_78 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_98 = zmm0
int128_t var_88 = var_48

if (rdx_7 != rbx_3)
    void* rax_16 = *(arg1 + 0x120)
    void* r10_1 = arg1 + 0x110
    
    if (rax_16 != 0)
        r10_1 = rax_16
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rbx_3 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_5) << 2)) & r12
    int32_t var_5c_2
    
    if (rdx_11 != 0)
    label_14084de32:
        int32_t rax_23 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
        int32_t r11_1
        
        if (rax_23 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_5c_1 = r9_4 - r11_1 + 0x1f
        
        if (r9_4 - r11_1 + 0x1f s> rbx_3)
            var_5c_2 = rbx_3
    else
        while (true)
            int64_t rcx_11 = sx.q(r8_5)
            r9_4 += 0x20
            r8_5 += 1
            
            if (rcx_11.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_11 << 2) + 4)
            var_60 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_14084de32
        
        var_5c_2 = rbx_3

while (true)
    int64_t rax_25 = sx.q(var_88:0xc.d)
    int64_t* rdx_12 = var_98.q
    
    if (rax_25.d == (var_60.q u>> 0x20).d && var_88.q == arg1 + 0x110 && rdx_12 == arg1 + 0x100)
        void* result = sub_14084f020(arg1 + 0x100, 0)
        bool cond:4 = *(arg1 + 0xfc) == 0
        *(arg1 + 0xf8) = 0
        
        if (cond:4)
            return result
        
        return sub_14085a880(arg1 + 0xf0, 0)
    
    int32_t* rbx_4 = *rdx_12 + rax_25 * 0x14
    int64_t* rax_27 = sub_140d3c6e0(rbx_4)
    
    if (rax_27 != 0)
        int64_t r9_6 = *rax_27
        (*(r9_6 + 0x290))(rax_27, sx.q(rbx_4[2]) + *(arg1 + 0xf0), arg1, r9_6, var_b8_1, 
            arg1 + 0x110, 0xffffffff)
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
