// 函数: sub_140bddd70
// 地址: 0x140bddd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t rbx = arg2[1].d
char rdi = 0
int64_t rsi = *arg2
int64_t* r15 = arg1
uint32_t arg_20 = 0
uint32_t rax_2 = zx.d(not.b((arg3 u>> 1).b))
int32_t rax_3 = rax_2 & 1
int16_t* var_e8 = nullptr
int32_t var_e0 = rbx
int32_t var_dc

if (rbx != 0)
    sub_1405a4c70(&var_e8, rbx, 0)
    memcpy(var_e8, rsi, rbx * 2)
else
    __builtin_memset(&var_dc, 0, 0x1c)

void* rbx_1 = nullptr
int32_t r13 = 0
int32_t rax_4 = sub_140a23cf0(&var_e8, &data_142d6ad1c, 0, 0, 0xffffffff)
int32_t var_c0 = rax_4
int32_t r12 = rax_4
int16_t* const rsi_1 = &data_142d40450
int16_t* var_d8_1
void* var_d0
int64_t var_c8
int64_t var_b8
int64_t var_a0

if (rax_4 != 0xffffffff)
    int32_t rcx_8
    int16_t* r8_3
    
    if (var_e0 == 0)
        rcx_8 = 0
        r8_3 = &data_142d40450
    else
        r8_3 = var_e8
        rcx_8 = var_e0 - 1
    
    int32_t rax_7 = rcx_8 - r12
    int32_t rdx_3
    
    if (rax_7 - 2 s>= 0)
        rdx_3 = rcx_8
        
        if (rax_7 - 2 s< rcx_8)
            rdx_3 = rax_7 - 2
    else
        rdx_3 = 0
    
    int32_t r15_1 = 0
    var_d8_1 = nullptr
    var_b8 = 0
    int64_t var_b0_1 = 0
    void* r14_1 = &r8_3[sx.q(rcx_8) - sx.q(rdx_3)]
    
    if (r14_1 != 0 && *r14_1 != 0)
        int64_t rbx_2 = -1
        
        do
            rbx_2 += 1
        while (*(r14_1 + (rbx_2 << 1)) != 0)
        
        if (rbx_2.d + 1 s> 0)
            sub_1405947f0(&var_b8, rbx_2.d + 1)
            r15_1 = var_b0_1:4.d
            r13 = var_b0_1.d
            var_d8_1 = var_b8
        
        r13 += rbx_2.d + 1
        var_b0_1.d = r13
        
        if (r13 s> r15_1)
            sub_140594770(&var_b8)
            r15_1 = var_b0_1:4.d
            r13 = var_b0_1.d
            var_d8_1 = var_b8
        
        rbx_1 = var_d8_1
        UnDecorator::getReferenceType(rbx_1, r14_1, (rbx_2.d + 1) * 2)
    
    var_c8:4.d = r15_1
    r15 = arg1
    var_d0 = rbx_1
    var_c8.d = r13
else
    int64_t r9_1 = *r15
    int16_t* const r8_2 = &data_142d40450
    
    if (var_e0 != 0)
        r8_2 = var_e8
    
    int64_t* rax_5 = (*(r9_1 + 0x288))(r15, &var_a0, r8_2, r9_1)
    
    if (&var_d0 != rax_5)
        void* rcx_4 = *rax_5
        *rax_5 = 0
        r13 = rax_5[1].d
        var_d8_1 = rcx_4
        var_d0 = rcx_4
        var_c8:4.d = *(rax_5 + 0xc)
        rax_5[1] = 0
        var_c8.d = r13
    
    int64_t rcx_6 = var_a0
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

int64_t var_68
__builtin_memset(&var_68, 0, 0x18)

if (r15 != 0)
    void* rbx_4 = r15[4]
    int64_t rax_12 = r15[3]
    
    if (rbx_4 != 0)
        int32_t rcx_14 = 0
        int16_t* var_88 = nullptr
        int32_t rdx_7 = 0
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        var_68 = rax_12
        
        while (true)
            void* r15_2 = *(rbx_4 + 0x20)
            
            if (r15_2 == 0)
                break
            
            if (rcx_14 s> 1)
                int32_t r14_2 = rcx_14 - 1
                
                if (rcx_14 s<= 0)
                    r14_2 = 0
                
                int32_t rax_13
                rax_13.b = rcx_14 s<= 0
                int32_t rax_15 = rax_13 + 1 + rcx_14
                var_80_1 = rax_15
                
                if (rax_15 s> rdx_7)
                    sub_140594770(&var_88)
                
                int64_t rcx_16 = sx.q(r14_2)
                var_88[rcx_16] = 0x2e
                var_88[rcx_16 + 1] = 0
            
            var_b8 = *(rbx_4 + 0x18)
            sub_140b63b70(&var_b8, &var_a0)
            int32_t var_98
            int32_t r8_7
            
            if (var_98 == 0)
                r8_7 = 0
            else
                r8_7 = var_98 - 1
            
            sub_140a20ba0(&var_88, var_a0, r8_7)
            int64_t rcx_19 = var_a0
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            rdx_7 = var_7c_1
            rbx_4 = r15_2
            rcx_14 = var_80_1
        
        int16_t* rdx_11 = &data_142d40450
        
        if (rcx_14 != 0)
            rdx_11 = var_88
        
        int64_t* rax_19 = sub_140b58260(&var_b8, rdx_11, 1)
        r12 = var_c0
        int64_t var_60_1 = *rax_19
        int16_t* rcx_22 = var_88
        int64_t var_58_2 = *(rbx_4 + 0x18)
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        r15 = arg1
    else
        int64_t var_58_1 = rax_12

__builtin_memset(&var_a0, 0, 0x18)
var_c0.q = 0
sub_140be4f90(8, &var_68, &var_a0, &var_c0)
void* rbx_5 = var_c0.q
int16_t* r14_4

if (rbx_5 == 0 || *(rbx_5 + 0x58) - *(rbx_5 + 0x84) s<= 0 || rbx_5 == -0x50)
    r14_4 = var_d8_1
    
    if (r12 != 0xffffffff)
        int16_t* r8_17 = &data_142d40450
        
        if (r13 != 0)
            r8_17 = r14_4
        
        int16_t** rax_44 = (*(*r15 + 0x288))(r15, &var_a0, r8_17)
        
        if (&var_e8 != rax_44)
            int16_t* rcx_47 = var_e8
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            var_e8 = *rax_44
            *rax_44 = nullptr
            var_e0 = rax_44[1].d
            int32_t var_dc_1 = *(rax_44 + 0xc)
            rax_44[1] = 0
        
        int64_t rcx_49 = var_a0
        
        if (rcx_49 != 0)
            sub_140a74f90(rcx_49)
else
    sub_14062d6e0(rbx_5 + 0x50, &var_c0, &var_e8)
    int64_t rax_23 = sx.q(var_c0)
    void* const rcx_24
    
    if (rax_23.d == 0xffffffff)
        rcx_24 = nullptr
    else
        rcx_24 = *(rbx_5 + 0x50) + rax_23 * 0x28
    
    int64_t* rax_25 = rcx_24 + 0x10
    
    if (rcx_24 == 0)
        rax_25 = nullptr
    
    if (rax_25 != 0)
    label_140bde154:
        int16_t* r14_3
        
        if (rax_25[1].d == 0)
            r14_3 = &data_142d40450
        else
            r14_3 = *rax_25
        
        if (var_e8 != r14_3)
            int32_t rbx_8
            
            if (r14_3 == 0 || *r14_3 == 0)
                rbx_8 = 0
            else
                int64_t rbx_7 = -1
                
                do
                    rbx_7 += 1
                while (r14_3[rbx_7] != 0)
                
                rbx_8 = rbx_7.d + 1
            
            int32_t rcx_27 = var_dc
            int32_t rdx_17 = 0
            int32_t var_e0_1 = 0
            
            if (rcx_27 != rbx_8)
                sub_1405947f0(&var_e8, rbx_8)
                rcx_27 = var_dc
                rdx_17 = var_e0_1
            
            int32_t rax_28 = rdx_17 + rbx_8
            var_e0 = rax_28
            
            if (rax_28 s> rcx_27)
                sub_140594770(&var_e8)
            
            if (rbx_8 != 0)
                memcpy(var_e8, r14_3, rbx_8 * 2)
        
        int32_t rax_29 = sub_140a23cf0(&var_e8, &data_142d6ad1c, 0, 0, 0xffffffff)
        
        if (rax_29 != 0xffffffff)
            int32_t rcx_39
            int16_t* r8_14
            
            if (var_e0 == 0)
                rcx_39 = 0
                r8_14 = &data_142d40450
            else
                r8_14 = var_e8
                rcx_39 = var_e0 - 1
            
            int32_t rax_38 = rcx_39 - rax_29
            int32_t rdx_24
            
            if (rax_38 - 2 s>= 0)
                rdx_24 = rcx_39
                
                if (rax_38 - 2 s< rcx_39)
                    rdx_24 = rax_38 - 2
            else
                rdx_24 = 0
            
            void* r15_4 = nullptr
            r13 = 0
            var_d0 = nullptr
            int32_t rax_41 = 0
            var_c8.d = 0
            var_c8:4.d = 0
            void* r14_5 = &r8_14[sx.q(rcx_39) - sx.q(rdx_24)]
            
            if (r14_5 != 0 && *r14_5 != 0)
                int64_t rbx_11 = -1
                
                do
                    rbx_11 += 1
                while (*(r14_5 + (rbx_11 << 1)) != 0)
                
                if (rbx_11.d + 1 s> 0)
                    sub_1405947f0(&var_d0, rbx_11.d + 1)
                    rax_41 = var_c8:4.d
                    r13 = var_c8.d
                    r15_4 = var_d0
                
                r13 += rbx_11.d + 1
                var_c8.d = r13
                
                if (r13 s> rax_41)
                    sub_140594770(&var_d0)
                    r13 = var_c8.d
                    r15_4 = var_d0
                
                UnDecorator::getReferenceType(r15_4, r14_5, (rbx_11.d + 1) * 2)
            
            if (var_d8_1 != 0)
                sub_140a74f90(var_d8_1)
            
            var_d8_1 = r15_4
        else
            int16_t* const r8_13 = &data_142d40450
            
            if (var_e0 != 0)
                r8_13 = var_e8
            
            int64_t* rax_31 = (*(*r15 + 0x288))(r15, &var_a0, r8_13)
            
            if (&var_d0 != rax_31)
                if (var_d8_1 != 0)
                    sub_140a74f90(var_d8_1)
                
                int16_t* rax_33 = *rax_31
                *rax_31 = 0
                r13 = rax_31[1].d
                rax_31[1] = 0
                var_d8_1 = rax_33
            
            int64_t rcx_34 = var_a0
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
    else
        sub_14062d6e0(rbx_5 + 0x50, &var_c0, &var_d0)
        int64_t rax_26 = sx.q(var_c0)
        void* const rcx_26
        
        if (rax_26.d == 0xffffffff)
            rcx_26 = nullptr
        else
            rcx_26 = *(rbx_5 + 0x50) + rax_26 * 0x28
        
        rax_25 = rcx_26 + 0x10
        
        if (rcx_26 == 0)
            rax_25 = nullptr
        
        if (rax_25 != 0)
            goto label_140bde154
    
    r14_4 = var_d8_1

int16_t* rdx_22 = &data_142d40450

if (var_e0 != 0)
    rdx_22 = var_e8

int32_t var_78
sub_140b58260(&var_78, rdx_22, 1)
int16_t* rdx_23 = &data_142d40450

if (r13 != 0)
    rdx_23 = r14_4

int32_t var_70
sub_140b58260(&var_70, rdx_23, 1)
int32_t r15_3 = arg3
int64_t rax_36
int64_t rbx_10

if ((not.b((r15_3 u>> 2).b) & 1) == 0)
    rbx_10 = arg1[2]
    rax_36 = sub_140bdf730()

if ((not.b((r15_3 u>> 2).b) & 1) != 0 || rbx_10 == rax_36)
    r12.b = 0
else
    r12.b = 1

int64_t* r9_3 = arg1
int32_t rbx_14 = 0
int64_t rax_47 = sx.q(r9_3[9].d)
var_b8 = rax_47

if (rax_47 s<= 0)
label_140bde59f:
    int64_t* rbx_15 = arg_10
    void* rax_53
    bool cond:11_1
    
    if (rax_3 != 0)
        int16_t* rdx_39 = &data_142d40450
        
        if (var_e0 != 0)
            rdx_39 = var_e8
        
        int16_t* const rcx_56
        
        if (rbx_15[1].d == 0)
            rcx_56 = &data_142d40450
        else
            rcx_56 = *rbx_15
        
        cond:11_1 = sub_140a54510(rcx_56, rdx_39).d == 0
    else
        int16_t* const r8_25 = &data_142d40450
        
        if (var_e0 != 0)
            r8_25 = var_e8
        
        if (rbx_15[1].d == 0)
            rax_53 = &data_142d40450
        else
            rax_53 = *rbx_15
        
        void* r8_26 = r8_25 - rax_53
        uint32_t i
        uint32_t rdx_37
        
        do
            rdx_37 = zx.d(*rax_53)
            i = zx.d(*(rax_53 + r8_26))
            
            if (rdx_37 != i)
                break
            
            rax_53 += 2
        while (i != 0)
        
        cond:11_1 = rdx_37 - i == 0
    
    rax_53.b = cond:11_1
    
    if (rax_53.b != 0)
        r15_3.b = not.b(r15_3.b)
        uint32_t i_1
        
        if ((r15_3.b & 1) == 0 && rbx_15[1].d s> 1)
            arg_10 = nullptr
            int64_t* rax_54 = sub_140b63b70(&arg_10, &var_a0)
            int32_t rcx_58 = rax_54[1].d
            bool cond:21_1
            
            if (rax_3 != 0)
                int16_t* rdx_43
                
                if (rcx_58 == 0)
                    rdx_43 = &data_142d40450
                else
                    rdx_43 = *rax_54
                
                if (rbx_15[1].d != 0)
                    rsi_1 = *rbx_15
                
                cond:21_1 = sub_140a54510(rsi_1, rdx_43) == 0
            else
                int16_t* const rdx_41
                
                if (rcx_58 == 0)
                    rdx_41 = &data_142d40450
                else
                    rdx_41 = *rax_54
                
                if (rbx_15[1].d != 0)
                    rsi_1 = *rbx_15
                
                void* rdx_42 = rdx_41 - rsi_1
                uint32_t rcx_59
                
                do
                    rcx_59 = zx.d(*rsi_1)
                    i_1 = zx.d(*(rsi_1 + rdx_42))
                    
                    if (rcx_59 != i_1)
                        break
                    
                    rsi_1 = &rsi_1[1]
                while (i_1 != 0)
                
                cond:21_1 = rcx_59 - i_1 == 0
            
            i_1.b = cond:21_1
            rdi = 1
        
        if ((r15_3.b & 1) != 0 || rbx_15[1].d s<= 1 || i_1.b != 0)
            rbx_15.b = 0
        else
            rbx_15 = 1
        
        if ((rdi & 1) != 0)
            int64_t rcx_62 = var_a0
            
            if (rcx_62 != 0)
                sub_140a74f90(rcx_62)
        
        if (rbx_15.b != 0 && sub_140d3cb50(arg1) != 0)
            sub_140baa940()
    
    rbx_14 = -1
else
    int64_t r14_6 = 0
    uint32_t r8_18
    r8_18.b = rax_2.b & 1
    int32_t* r15_5 = nullptr
    arg_20 = r8_18
    
    while (true)
        uint64_t rax_48 = r9_3[8]
        int32_t rcx_50 = *(r15_5 + rax_48)
        void* rdx_29 = r15_5 + rax_48
        rax_48.b = rcx_50 == var_78
        int32_t var_74
        
        if (rax_48.b != 0 && *(rdx_29 + 4) == var_74)
            break
        
        rax_48.b = rcx_50 == var_70
        int32_t var_6c
        
        if (rax_48.b != 0 && *(rdx_29 + 4) == var_6c)
            break
        
        if (r12.b != 0)
            (*(*r9_3 + 0x278))(r9_3, &var_d0, zx.q(rbx_14))
            int32_t r11_1 = rax_3
            void* rax_51
            void* r9_4
            int32_t r10_1
            bool cond:18_1
            
            if (r11_1 != 0)
                int16_t* rdx_33 = &data_142d40450
                void* rcx_52 = &data_142d40450
                
                if (var_e0 != 0)
                    rdx_33 = var_e8
                
                if (var_c8.d != 0)
                    rcx_52 = var_d0
                
                r10_1 = var_c8.d
                cond:18_1 = sub_140a54510(rcx_52, rdx_33).d == 0
                r9_4 = var_d0
                r11_1 = rax_3
            else
                int16_t* r8_20 = &data_142d40450
                r10_1 = var_c8.d
                rax_51 = &data_142d40450
                
                if (var_e0 != 0)
                    r8_20 = var_e8
                
                r9_4 = var_d0
                
                if (r10_1 != 0)
                    rax_51 = r9_4
                
                void* r8_21 = r8_20 - rax_51
                uint32_t i_2
                uint32_t rdx_31
                
                do
                    rdx_31 = zx.d(*rax_51)
                    i_2 = zx.d(*(rax_51 + r8_21))
                    
                    if (rdx_31 != i_2)
                        break
                    
                    rax_51 += 2
                while (i_2 != 0)
                
                cond:18_1 = rdx_31 - i_2 == 0
            
            rax_51.b = cond:18_1
            void* rax_52
            
            if (rax_51.b == 0)
                bool cond:20_1
                
                if (r11_1 != 0)
                    int16_t* rdx_36 = &data_142d40450
                    void* rcx_53 = &data_142d40450
                    
                    if (r13 != 0)
                        rdx_36 = var_d8_1
                    
                    if (r10_1 != 0)
                        rcx_53 = r9_4
                    
                    rax_52 = sub_140a54510(rcx_53, rdx_36)
                    r9_4 = var_d0
                    cond:20_1 = rax_52.d == 0
                else
                    int16_t* r8_22 = &data_142d40450
                    rax_52 = &data_142d40450
                    
                    if (r13 != 0)
                        r8_22 = var_d8_1
                    
                    if (r10_1 != 0)
                        rax_52 = r9_4
                    
                    void* r8_23 = r8_22 - rax_52
                    uint32_t i_3
                    uint32_t rdx_34
                    
                    do
                        rdx_34 = zx.d(*rax_52)
                        i_3 = zx.d(*(rax_52 + r8_23))
                        
                        if (rdx_34 != i_3)
                            break
                        
                        rax_52 += 2
                    while (i_3 != 0)
                    
                    cond:20_1 = rdx_34 - i_3 == 0
                
                rax_52.b = cond:20_1
            
            if (rax_51.b != 0 || rax_52.b != 0)
                if (r9_4 == 0)
                    break
                
                sub_140a74f90(r9_4)
                break
            
            if (r9_4 != 0)
                sub_140a74f90(r9_4)
            
            r9_3 = arg1
        
        rbx_14 += 1
        r14_6 += 1
        r15_5 = &r15_5[4]
        
        if (r14_6 s>= var_b8)
            r15_3 = arg3
            goto label_140bde59f

if (var_d8_1 != 0)
    sub_140a74f90(var_d8_1)

int16_t* rcx_66 = var_e8

if (rcx_66 != 0)
    sub_140a74f90(rcx_66)

return zx.q(rbx_14)
