// 函数: sub_140bb44b0
// 地址: 0x140bb44b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* var_120 = arg1
uint64_t r12 = arg2
void* r8 = *(arg2 + 0xe0)
int32_t var_158 = 0
int32_t rax_2 = *(r8 + 8)
*(r8 + 8) = rax_2 | 0x20000
r8.b = 1
*(arg2 + 0x118) = arg3
int64_t var_108 = 0
int32_t var_100 = 0
sub_140d3ccc0(r12, &var_108, r8.b, 0, var_158)
int32_t rdi = 0

if (var_100 s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        sub_140cc45a0(arg1 + 0x200, *(rbx_1 + var_108))
        rdi += 1
        rbx_1 = &rbx_1[1]
    while (rdi s< var_100)

if ((not.b((*(*(r12 + 0xe0) + 8) u>> 0x11).b) & 1) == 0)
    sub_140cc45a0(arg1 + 0x200, r12)
    sub_140ca8970(r12, 1)
    sub_140cc45a0(arg1 + 0x200, arg3)
    char var_138 = 0
    char* var_e0_1 = &var_138
    void*** (* var_e8)() = j_sub_140b99600
    void** rbx_2 = sub_140a756e0(&var_e8, &data_1439a98a0) + 0x60
    void** var_130 = rbx_2
    int32_t var_110
    sub_1405ba560(rbx_2, &var_110, r12)
    int64_t rax_6 = sx.q(var_110)
    void* rcx_11
    
    if (rax_6.d == 0xffffffff)
        rcx_11 = nullptr
    else
        rcx_11 = (rax_6 << 5) + *rbx_2
    
    void* rax_7 = rcx_11 + 8
    
    if (rcx_11 == 0)
        rax_7 = nullptr
    
    if (rax_7 != 0)
        int64_t* r14_1 = *rax_7
        int64_t r15_1 = 0
        uint64_t r13_2 = sx.q(*(rax_7 + 8)) << 3 u>> 3
        
        if (r14_1 u> &r14_1[sx.q(*(rax_7 + 8))])
            r13_2 = 0
        
        if (r13_2 != 0)
            do
                void* rdi_1 = *r14_1
                
                if (sub_140ce1120(rdi_1 + 0x28) == 0)
                    int64_t rax_11 = sub_140d3cb50(rdi_1)
                    
                    if (rax_11 != 0)
                        int64_t rbx_3 = sx.q(*(rdi_1 + 0x30))
                        double zmm2_1[0x2] = sub_140d3e8d0(rdi_1, nullptr, 0xffffffff, 1)
                        *((rbx_3 << 7) + *(rax_11 + 0x18) - 0x40) = 0
                        uint64_t rax_12 = sub_140cb4600(rax_11, (rbx_3 - 1).d, zmm2_1)
                        int64_t r8_4 = *(rdi_1 + 0x28)
                        (*(r8_4 + 0x10))(rdi_1 + 0x28, rax_12, r8_4)
                        int32_t rcx_17 = *(rdi_1 + 0xc)
                        void* const rax_15
                        
                        if (rcx_17 s>= data_143e1d9b4)
                            rax_15 = nullptr
                        else
                            uint32_t rdx_12 = zx.d(rcx_17.w)
                            
                            if (rcx_17 s< 0)
                                rcx_17 += 0xffff
                                rdx_12 -= 0x10000
                            
                            rax_15 = *(data_143e1d9a0 + (sx.q(rcx_17 s>> 0x10) << 3))
                                + sx.q(rdx_12) * 0x18
                        
                        *(rax_15 + 8) |= 0x20000000
                        sub_140bb90e0(rax_11, rdi_1)
                        
                        if (rax_12 != 0)
                            sub_140cc45a0(rax_11 + 0x200, rax_12)
                
                r14_1 = &r14_1[1]
                r15_1 += 1
            while (r15_1 != r13_2)
            
            rbx_2 = var_130
        
        sub_1408fa6d0(rbx_2, r12)
    
    void* rdi_2 = *(r12 + 0x40)
    void** r15_2 = nullptr
    var_130 = nullptr
    int32_t rbx_5 = 0
    int32_t var_124_1 = 0
    int32_t r14_2 = 0
    void** rsi_2 = nullptr
    
    if (rdi_2 != 0)
        while (*(rdi_2 + 0xe0) != 0)
            int64_t rsi_3 = sx.q(rbx_5)
            rbx_5 = (rsi_3 + 1).d
            
            if (rbx_5 s> r14_2)
                sub_1405a4d70(&var_130)
                r14_2 = var_124_1
                r15_2 = var_130
            
            memmove(&r15_2[1], r15_2, (rsi_3 << 3).d)
            *r15_2 = rdi_2
            rsi_2 = r15_2
            rdi_2 = *(rdi_2 + 0x40)
            
            if (rdi_2 == 0)
                break
    
    int64_t r12_1 = 0
    uint64_t r13_4 = sx.q(rbx_5) << 3 u>> 3
    
    if (rsi_2 u> &rsi_2[sx.q(rbx_5)])
        r13_4 = 0
    
    if (r13_4 != 0)
        void* r15_3 = var_120
        
        do
            void* r14_3 = *rsi_2
            uint64_t rbx_6 = *(r14_3 + 0xe0)
            
            if (rbx_6 != 0)
                int32_t rcx_26 = *(rbx_6 + 8)
                
                if (((rcx_26 u>> 0x11).b & 1) != 0)
                    if (((rcx_26 u>> 0x15).b & 1) == 0)
                        *(rbx_6 + 8) = rcx_26 | 0x400
                        int64_t rax_22 = sub_140d3cb50(rbx_6)
                        
                        if (rax_22 != 0)
                            sub_140cc45a0(rax_22 + 0x200, rbx_6)
                    
                    char var_148_1 = 1
                    char var_150_1 = 1
                    var_158.b = 1
                    var_120 = nullptr
                    int32_t var_118_1 = 0
                    void var_d8
                    sub_140cad390(&var_d8, &var_120, rbx_6, 0, var_158.b, var_150_1, var_148_1)
                    sub_140cba380(&var_d8, rbx_6, 0, 0)
                    
                    for (int32_t i = 0; i s>= 0; i += 1)
                        if (i s>= var_118_1)
                            break
                        
                        uint64_t rdi_3 = *(var_120 + (sx.q(i) << 3))
                        int32_t rcx_33 = *(rdi_3 + 8)
                        
                        if (((rcx_33 u>> 0x15).b & 1) == 0)
                            *(rdi_3 + 8) = rcx_33 | 0x400
                            int64_t rax_26 = sub_140d3cb50(rdi_3)
                            
                            if (rax_26 != 0)
                                sub_140cc45a0(rax_26 + 0x200, rdi_3)
                                sub_140bb1330(rdi_3)
                    
                    int32_t var_70_1 = 0
                    int64_t var_78
                    
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    int32_t var_b0_1 = 0
                    uint64_t var_b8
                    int32_t var_ac
                    
                    if (var_ac != 0)
                        sub_1405a5410(&var_b8, 0)
                    
                    int32_t var_88_1 = 0xffffffff
                    int32_t var_84_1 = 0
                    void var_a8
                    sub_14059a8e0(&var_a8, 0)
                    int64_t var_98
                    
                    if (var_98 != 0)
                        sub_140a74f90(var_98)
                    
                    uint64_t rcx_42 = var_b8
                    
                    if (rcx_42 != 0)
                        sub_140a74f90(rcx_42)
                    
                    sub_140d16360(&var_d8)
                    void* rcx_44 = var_120
                    
                    if (rcx_44 != 0)
                        sub_140a74f90(rcx_44)
                    
                    sub_140bb44b0(r15_3, r14_3, *(r14_3 + 0x118))
            
            rsi_2 = &rsi_2[1]
            r12_1 += 1
        while (r12_1 != r13_4)
        
        r15_2 = var_130
    
    r12 = arg2
    uint64_t rbx_7 = *(r12 + 0xe0)
    
    if (rbx_7 != 0)
        int32_t rcx_46 = *(rbx_7 + 8)
        
        if (((rcx_46 u>> 0x15).b & 1) == 0)
            *(rbx_7 + 8) = rcx_46 | 0x400
            int64_t rax_29 = sub_140d3cb50(rbx_7)
            
            if (rax_29 != 0)
                sub_140cc45a0(rax_29 + 0x200, rbx_7)
    
    if ((*(*rbx_7 + 0x230))(rbx_7, r12, arg3) != 0)
        *(rbx_7 + 8) &= 0xfffdffff
        *(r12 + 8) &= 0xffffcbff
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)

void* rcx_52 = *(r12 + 0xe0)
int32_t rax_32 = *(rcx_52 + 8)

if (((rax_2 u>> 0x11).b & 1) == 0)
    *(rcx_52 + 8) = rax_32 & 0xfffdffff

int64_t rcx_53 = var_108

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

__security_check_cookie(rax_1 ^ &var_178)
return zx.q(not.b((rax_32 u>> 0x11).b)) & 1
