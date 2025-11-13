// 函数: sub_141e71d20
// 地址: 0x141e71d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e85b60(&arg1[0x11])
int32_t r11 = arg1[0x19].d
int32_t r8 = 0
int32_t var_a4 = 1
int32_t rcx_1 = 0
int32_t var_a8 = 0
void* var_a0 = &arg1[0x16]
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = arg1[0x18]
    void* r9_1 = &arg1[0x16]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141e71dd8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t arg_10 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_94.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            var_94:4.d = rcx_1
            var_a8 = r8
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e71dd8
        
        var_94.d = r11

int32_t rdx_6 = arg1[0x19].d
int32_t r8_2 = rdx_6 s>> 5
int32_t rsi = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t* var_88
var_88.d = r8_2
int128_t var_70 = 0xffffffff
int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_80
var_80:8.d = rsi
var_80:0xc.d = rdx_6
var_70.d = r9_3
int64_t* var_60 = (&arg1[0x14]).o.q
int128_t var_50 = var_a8.o

if (rdx_6 != r11)
    void* rax_11 = arg1[0x18]
    void* r10_1 = &arg1[0x16]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_10 != 0)
    label_141e71eba:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_18 = temp0_3
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        int32_t rax_19 = r9_3 - rbx_1 + 0x1f
        var_80:0xc.d = rax_19
        
        if (rax_19 s> r11)
            var_80:0xc.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            var_70.d = r9_3
            var_88.d = r8_2
            
            if (rcx_6.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_80:8.d = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141e71eba
        
        var_80:0xc.d = r11

while (true)
    int64_t rcx_8 = sx.q(var_50:0xc.d)
    
    if (rcx_8.d == (var_80:8.q u>> 0x20).d && var_50.q == &arg1[0x16] && var_60 == &arg1[0x14])
        sub_141e859e0(&arg1[0x14])
        int32_t rax_32 = arg1[1].d
        int64_t rbx_5 = sx.q(rax_32 - 1)
        
        if (rax_32 - 1 s>= 0)
            int64_t temp7_1
            
            do
                sub_141e7c490(arg1, *(*arg1 + (rbx_5 << 3)))
                temp7_1 = rbx_5
                rbx_5 -= 1
            while (temp7_1 - 1 s>= 0)
        
        int64_t* rcx_18 = arg1[0x31]
        
        if (rcx_18 != 0)
            (*(*rcx_18 + 0x20))(rcx_18, 0xffffffff, 0)
            sub_140a4fc50(arg1[0x31])
            arg1[0x31] = 0
        
        int64_t* rcx_20 = arg1[0x30]
        
        if (rcx_20 != 0)
            rcx_20[9].d -= 1
            
            if (rcx_20[9].d == 1)
                sub_140a2f6e0(rcx_20)
        
        sub_1405ae080(&arg1[0x25])
        DeleteCriticalSection(&arg1[0x1e])
        arg1[0x1d].d = 0
        int64_t rcx_23 = arg1[0x1c]
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        sub_141e71b60(&arg1[0x14])
        void* rcx_25 = data_143f5b298
        
        if (rcx_25 != 0 && sub_1423dcff0(rcx_25) != 0 && arg1[0x12] != 0)
            void* rax_37 = sub_1423dcff0(data_143f5b298)
            
            if (rax_37 != 0)
                sub_141e797e0(rax_37, zx.q(arg1[0x13].d), arg1[0x11])
        
        int64_t rcx_28 = arg1[0xf]
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        int64_t rcx_29 = arg1[0xd]
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        void* result = sub_1405ae080(&arg1[2])
        int64_t rcx_31 = *arg1
        
        if (rcx_31 == 0)
            return result
        
        return sub_140a74f90(rcx_31)
    
    rsi.b = 0
    int32_t rdx_11 = data_143a2d4a8
    int32_t r14_1 = *((rcx_8 << 6) + *var_60)
    int32_t rcx_11 = data_143a2d4b4 + 1
    int64_t rdi_1 = sx.q(rdx_11 - 1)
    data_143a2d4b4 = rcx_11
    
    if (rdx_11 - 1 s>= 0)
        int64_t rbx_3 = rdi_1 << 4
        int64_t temp6_1
        
        do
            int64_t rax_23 = data_143a2d4a0
            
            if (*(rbx_3 + rax_23 + 8) == 0)
                rsi.b = 1
            else
                int64_t* rcx_12 = *(rbx_3 + rax_23)
                
                if (rcx_12 == 0)
                    rsi.b = 1
                else
                    char rax_25
                    rax_25, r9_3 = (*(*rcx_12 + 0x50))(rcx_12, zx.q(r14_1))
                    
                    if (rax_25 == 0)
                        rsi.b = 1
            
            rbx_3 -= 0x10
            temp6_1 = rdi_1
            rdi_1 -= 1
        while (temp6_1 - 1 s>= 0)
        rcx_11 = data_143a2d4b4
        rdx_11 = data_143a2d4a8
    
    data_143a2d4b4 = rcx_11 - 1
    
    if (rsi.b != 0 && rcx_11 - 1 s<= 0)
        int32_t rbx_4 = 0
        rsi = rdx_11
        
        if (rdx_11 s> 0)
            int64_t* rdi_2 = nullptr
            
            do
                int64_t rax_26 = data_143a2d4a0
                
                if (*(rdi_2 + rax_26 + 8) == 0)
                    r9_3.b = 1
                    sub_1405a4880(&data_143a2d4a0, rbx_4, 1, r9_3.b)
                else
                    int64_t* rcx_14 = *(rdi_2 + rax_26)
                    
                    if (rcx_14 == 0)
                        r9_3.b = 1
                        sub_1405a4880(&data_143a2d4a0, rbx_4, 1, r9_3.b)
                    else
                        char rax_28
                        rax_28, r9_3 = (*(*rcx_14 + 0x20))(rcx_14)
                        
                        if (rax_28 != 0)
                            r9_3.b = 1
                            sub_1405a4880(&data_143a2d4a0, rbx_4, 1, r9_3.b)
                        else
                            rbx_4 += 1
                            rdi_2 = &rdi_2[2]
                
                rdx_11 = data_143a2d4a8
            while (rbx_4 s< rdx_11)
        
        int32_t rax_29 = rdx_11 * 2
        
        if (rax_29 s<= 2)
            rax_29 = 2
        
        data_143a2d4b0 = rax_29
        
        if (rsi s> rax_29 && data_143a2d4ac != rdx_11)
            sub_1405a5410(&data_143a2d4a0, rdx_11)
    
    int32_t var_54
    var_50:8.d &= not.d(var_54)
    void var_58
    sub_14059bdd0(&var_58)
