// 函数: sub_1408d8870
// 地址: 0x1408d8870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t (* arg_8)(void* arg1, void* arg2) = arg1
int64_t rdi = sx.q(arg2[1].d)
*(arg1 + 0x38) = 0

if (rdi.d s> *(arg1 + 0x3c))
    sub_1405a5220(arg1 + 0x30, rdi.d)

int64_t r15 = *arg2
int64_t r14_1 = sx.q(*(arg1 + 0x38))
int32_t rax = (r14_1 + rdi).d
*(arg1 + 0x38) = rax

if (rax s> *(arg1 + 0x3c))
    sub_140638970(arg1 + 0x30)

memcpy(r14_1 * 0x30 + *(arg1 + 0x30), r15, (rdi * 0x30).d)
int32_t rdx_4 = *(arg1 + 0xa0) - *(arg1 + 0xcc)

if (rdx_4 s> *(arg1 + 0xf4))
    sub_1405c5570(arg1 + 0xe8, rdx_4)

int32_t rdx_5 = *(arg1 + 0x40)

if (rdx_5 s> *(arg1 + 0x104))
    sub_1405a5410(arg1 + 0xf8, rdx_5)

int32_t var_b4 = 1
int32_t r11 = *(arg1 + 0xc0)
void* arg_10 = arg1 + 0x98
int32_t rcx_7 = 0
int32_t var_b8 = 0
int32_t r8_2 = 0
void* var_b0 = arg1 + 0xa8
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0xb8)
    void* r9_1 = arg1 + 0xa8
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *r9_1
    
    if (rdx_8 != 0)
    label_1408d89b8:
        int32_t rax_8 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8_2 - rax_9 + 0x1f
        
        if (r8_2 - rax_9 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_7)
            r8_2 += 0x20
            rcx_7 += 1
            var_a4:4.d = r8_2
            var_b8 = rcx_7
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1408d89b8
        
        var_a4.d = r11

int32_t rdx_10 = *(arg1 + 0xc0)
double zmm2[0x2] = var_a8.o
double var_58[0x2] = zmm2
int32_t r15_1 = 0xffffffff << (rdx_10.b & 0x1f)
int128_t var_68 = var_b8.o
int32_t r8_5 = rdx_10 s>> 5
int32_t r9_3 = rdx_10 & 0xffffffe0
int64_t var_78 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_a8_1 = r15_1
var_a4.d = rdx_10
int128_t result_1 = (arg1 + 0x98).o
int128_t var_88 = var_68

if (rdx_10 != r11)
    void* rax_11 = *(arg1 + 0xb8)
    void* r10_1 = arg1 + 0xa8
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_14 = *(r10_1 + (sx.q(r8_5) << 2)) & r15_1
    
    if (rdx_14 != 0)
    label_1408d8a92:
        int32_t rax_18 = neg.d(rdx_14) & rdx_14
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_a4.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_12 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            
            if (rcx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r10_1 + (rcx_12 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_1408d8a92
        
        var_a4.d = r11

void* rsi = arg_10

while (true)
    int64_t rax_21 = sx.q(var_88:0xc.d)
    int64_t* rdx_15 = result_1.q
    
    if (rax_21.d == (var_a8_1.q u>> 0x20).d && var_88.q == arg1 + 0xa8 && rdx_15 == rsi)
        int64_t (* r13_2)(void* arg1, void* arg2) = arg_8
        var_b8.q = sub_1408d6f80
        arg_8 = r13_2
        void** var_b0_1 = &arg_8
        sub_14077b750(*(r13_2 + 0xf0), &var_b8, 0)
        int64_t* i = *(arg1 + 0xf8)
        int32_t rsi_1 = 0
        
        for (void* r12_4 = &i[sx.q(*(arg1 + 0x100)) * 2]; i != r12_4; i = &i[2])
            void* rbx_4 = *i
            int32_t arg_18 = i[1].d.d
            arg_8.b = 0
            void* rax_29 = *(rbx_4 + 0x80)
            void* rcx_21 = rbx_4 + 0x90
            arg_10.d = (*(rbx_4 + 0x20)).d
            
            if (rax_29 != 0)
                rcx_21 = rax_29
            
            void* arg_20 = rbx_4
            (*(rbx_4 + 0x70))((*(*rcx_21 + 8))(rcx_21), &arg_20, &arg_18, &arg_10, &arg_8)
        
        int32_t rax_32 = *(arg1 + 0xf4)
        *(arg1 + 0xf0) = 0
        
        if (rax_32 s< 0 && rax_32 != 0)
            sub_1405c5570(arg1 + 0xe8, 0)
        
        int32_t rax_33 = *(arg1 + 0x104)
        *(arg1 + 0x100) = 0
        
        if (rax_33 s< 0 && rax_33 != 0)
            sub_1405a5410(arg1 + 0xf8, 0)
        
        var_b8 = 0
        int32_t r10_2 = *(r13_2 + 0x70)
        int32_t var_b4_2 = 1
        int32_t rcx_25 = 0
        void* var_b0_2 = r13_2 + 0x58
        int32_t var_a8_2 = 0xffffffff
        var_a4.d = 0
        var_a4:4.d = 0
        
        if (r10_2 != 0)
            void* rax_34 = *(r13_2 + 0x68)
            void* r8_7 = r13_2 + 0x58
            
            if (rax_34 != 0)
                r8_7 = rax_34
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_2 - 1)
            int32_t rdx_22 = *r8_7
            
            if (rdx_22 != 0)
            label_1408d8cbd:
                int32_t rax_41 = neg.d(rdx_22) & rdx_22
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_41)
                int32_t var_b4_3 = rax_41
                int32_t rax_42
                
                if (rax_41 == 0)
                    rax_42 = 0x20
                else
                    rax_42 = 0x1f - temp0_5
                
                var_a4.d = rcx_25 - rax_42 + 0x1f
                
                if (rcx_25 - rax_42 + 0x1f s> r10_2)
                    var_a4.d = r10_2
            else
                while (true)
                    int64_t rdx_23 = sx.q(rsi_1)
                    rcx_25 += 0x20
                    rsi_1 += 1
                    var_a4:4.d = rcx_25
                    var_b8 = rsi_1
                    
                    if (rdx_23.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        var_a4.d = r10_2
                        break
                    
                    rdx_22 = *(r8_7 + (rdx_23 << 2) + 4)
                    var_a8_2 = 0xffffffff
                    
                    if (rdx_22 != 0)
                        goto label_1408d8cbd
        
        int32_t rdx_25 = *(r13_2 + 0x70)
        zmm2 = var_a8_2.o
        double var_58_1[0x2] = zmm2
        int32_t rsi_2 = 0xffffffff << (rdx_25.b & 0x1f)
        int128_t var_68_1 = var_b8.o
        int32_t r8_9 = rdx_25 s>> 5
        int32_t r9_7 = rdx_25 & 0xffffffe0
        int64_t var_78_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_a8_3 = rsi_2
        var_a4.d = rdx_25
        int128_t result = (r13_2 + 0x48).o
        result_1 = result
        int128_t var_88_1 = var_68_1
        
        if (rdx_25 != r10_2)
            void* rax_44 = *(r13_2 + 0x68)
            void* r10_3 = r13_2 + 0x58
            
            if (rax_44 != 0)
                r10_3 = rax_44
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r10_2 - 1)
            int32_t rdx_29 = *(r10_3 + (sx.q(r8_9) << 2)) & rsi_2
            
            if (rdx_29 != 0)
            label_1408d8da2:
                int32_t rax_51 = neg.d(rdx_29) & rdx_29
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_51)
                int32_t r15_3
                
                if (rax_51 == 0)
                    r15_3 = 0x20
                else
                    r15_3 = 0x1f - temp0_7
                
                var_a4.d = r9_7 - r15_3 + 0x1f
                
                if (r9_7 - r15_3 + 0x1f s> r10_2)
                    var_a4.d = r10_2
            else
                while (true)
                    int64_t rcx_30 = sx.q(r8_9)
                    r9_7 += 0x20
                    r8_9 += 1
                    
                    if (rcx_30.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_29 = *(r10_3 + (rcx_30 << 2) + 4)
                    var_a8_3 = 0xffffffff
                    
                    if (rdx_29 != 0)
                        goto label_1408d8da2
                
                var_a4.d = r10_2
        
        while (true)
            int64_t rax_53 = sx.q(var_88_1:0xc.d)
            int64_t* rcx_32 = result_1.q
            
            if (rax_53.d == (var_a8_3.q u>> 0x20).d && var_88_1.q == r13_2 + 0x58
                    && rcx_32 == r13_2 + 0x48)
                return result
            
            int64_t rcx_33 = *rcx_32
            int64_t r9_10 = rax_53 << 5
            int64_t (* rax_56)(void* arg1, void* arg2) = sub_1408d6fc0
            
            if (((*(r13_2 + 0x28) u>> 2).b & 1) != 0)
                rax_56 = sub_1408d6fb0
            
            int32_t rdx_30 = *(r9_10 + rcx_33 + 0x10)
            int64_t rcx_34 = *(r9_10 + rcx_33 + 8)
            arg_8 = rax_56
            sub_1408d6590(rcx_34, rdx_30, &arg_8)
            var_88_1:8.d &= not.d(result_1:0xc.d)
            sub_14059bdd0(&result_1:8)
    
    int64_t r15_2 = sx.q(*(arg1 + 0xf0))
    void* rbx_2 = *(*rdx_15 + rax_21 * 0x18 + 8)
    int32_t rax_23 = (r15_2 + 1).d
    *(arg1 + 0xf0) = rax_23
    
    if (rax_23 s> *(arg1 + 0xf4))
        sub_1405a4d70(arg1 + 0xe8)
    
    *(*(arg1 + 0xe8) + (r15_2 << 3)) = rbx_2
    
    if (*(rbx_2 + 0x24) == 2)
        var_b8.q = rbx_2
        int64_t rbx_3 = sx.q(*(arg1 + 0x100))
        var_b0.d = (*(rbx_2 + 0x20)).d
        int32_t rax_25 = (rbx_3 + 1).d
        *(arg1 + 0x100) = rax_25
        
        if (rax_25 s> *(arg1 + 0x104))
            sub_1405a4f90(arg1 + 0xf8)
        
        *(*(arg1 + 0xf8) + rbx_3 * 0x10) = var_b8.o
    
    var_88:8.d &= not.d(result_1:0xc.d)
    sub_14059bdd0(&result_1:8)
