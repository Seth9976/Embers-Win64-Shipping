// 函数: sub_1418a8100
// 地址: 0x1418a8100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
char var_130 = 0xff
int32_t var_148

while (true)
    void* rdi_1 = **(arg1 + 0x18)
    
    if (rdi_1 == 0)
        break
    
    uint64_t rax_3 = zx.q(*(rdi_1 + 0x20))
    int64_t entry_r9
    
    if (rax_3.d u> 0xff)
        sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", entry_r9)
        sub_140afbb40()
    else if (rax_3.d != 0xff)
        int64_t var_140
        uint64_t rdx_4
        
        if (rax_3.d u> 5)
            sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", entry_r9)
            sub_140afbb40()
        else
            switch (rax_3)
                case 0
                    uint64_t rdx = zx.q(var_130)
                    bool cond:6_1
                    
                    if (rdx.d u<= 5)
                        switch (rdx)
                            case 0
                                cond:6_1 = rdx.b != 0
                            label_1418a81a3:
                                
                                if (not(cond:6_1))
                                    int64_t rcx_4 = var_140
                                    char var_130_1 = 0xff
                                    
                                    if (rcx_4 != 0)
                                        sub_140a74f90(rcx_4)
                            case 1
                                cond:6_1 = rdx.b != 1
                                goto label_1418a81a3
                            case 2, 3, 4
                                if (rdx.b == 2)
                                    char var_130_2 = 0xff
                            case 5
                                char rax_5 = rdx.b
                                
                                if (rdx.b == 2)
                                    rax_5 = -1
                                
                                char var_130_3 = rax_5
                    var_148 = *(rdi_1 + 8)
                    sub_140596d10(&var_140, rdi_1 + 0x10)
                    var_130 = 0
                case 1
                    uint64_t rdx_2 = zx.q(var_130)
                    bool cond:7_1
                    
                    if (rdx_2.d u<= 5)
                        switch (rdx_2)
                            case 0
                                cond:7_1 = rdx_2.b != 0
                            label_1418a820c:
                                
                                if (not(cond:7_1))
                                    int64_t rcx_8 = var_140
                                    char var_130_4 = 0xff
                                    
                                    if (rcx_8 != 0)
                                        sub_140a74f90(rcx_8)
                            case 1
                                cond:7_1 = rdx_2.b != 1
                                goto label_1418a820c
                            case 2, 3, 4
                                if (rdx_2.b == 2)
                                    char var_130_5 = 0xff
                            case 5
                                char rax_8 = rdx_2.b
                                
                                if (rdx_2.b == 2)
                                    rax_8 = -1
                                
                                char var_130_6 = rax_8
                    var_148 = *(rdi_1 + 8)
                    sub_140596d10(&var_140, rdi_1 + 0x10)
                    var_130 = 1
                case 2
                    rdx_4 = zx.q(var_130)
                    bool cond:8_1
                    
                    if (rdx_4.d u> 5)
                        var_130 = 2
                    else
                        switch (rdx_4)
                            case 0
                            label_1418a8273:
                                cond:8_1 = rdx_4.b != 0
                            label_1418a82c2:
                                
                                if (cond:8_1)
                                    var_130 = 2
                                else
                                    int64_t rcx_18 = var_140
                                    char var_130_7 = 0xff
                                    
                                    if (rcx_18 != 0)
                                        sub_140a74f90(rcx_18)
                                    
                                    var_130 = 2
                            case 1
                            label_1418a82bf:
                                cond:8_1 = rdx_4.b != 1
                                goto label_1418a82c2
                            case 2, 3, 4, 5
                                var_130 = 2
                case 3
                    rdx_4 = zx.q(var_130)
                    
                    if (rdx_4.d u> 5)
                        var_130 = 2
                    else
                        switch (rdx_4)
                            case 0
                                goto label_1418a8273
                            case 1
                                goto label_1418a82bf
                            case 2, 3, 4, 5
                                var_130 = 2
                case 4
                    rdx_4 = zx.q(var_130)
                    
                    if (rdx_4.d u> 5)
                        var_130 = 2
                    else
                        switch (rdx_4)
                            case 0
                                goto label_1418a8273
                            case 1
                                goto label_1418a82bf
                            case 2, 3, 4, 5
                                var_130 = 2
                case 5
                    rdx_4 = zx.q(var_130)
                    
                    if (rdx_4.d u> 5)
                        var_130 = 2
                    else
                        switch (rdx_4)
                            case 0
                                goto label_1418a8273
                            case 1
                                goto label_1418a82bf
                            case 2, 3, 4, 5
                                var_130 = 2
    
    void* rbx_1 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rdi_1
    char var_110_1 = 0xff
    void var_128
    entry_r9 = sub_14189ead0(rdi_1 + 8, &var_128)
    uint64_t rdx_6 = zx.q(var_110_1)
    bool cond:2_1
    
    if (rdx_6.d u<= 5)
        switch (rdx_6)
            case 0
                cond:2_1 = rdx_6.b != 0
            label_1418a832c:
                
                if (not(cond:2_1))
                    char var_110_2 = 0xff
                    int64_t var_120
                    
                    if (var_120 != 0)
                        entry_r9 = sub_140a74f90(var_120)
            case 1
                cond:2_1 = rdx_6.b != 1
                goto label_1418a832c
            case 2, 3, 4
                if (rdx_6.b == 2)
                    char var_110_3 = 0xff
            case 5
                char rax_15 = rdx_6.b
                
                if (rdx_6.b == 2)
                    rax_15 = -1
                
                char var_110_4 = rax_15
    
    if (rbx_1 != 0)
        sub_1418aac00(rbx_1 + 8)
        entry_r9 = j_sub_140a74f90(rbx_1)
    
    if (var_130 == 0)
        int64_t rdi_2 = 0
        int64_t* rbx_2 = *arg2
        uint64_t rsi_2 = sx.q(arg2[1].d) << 3 u>> 3
        
        if (rbx_2 u> &rbx_2[arg2[1]])
            rsi_2 = 0
        
        if (rsi_2 != 0)
            do
                int64_t* rcx_25 = *rbx_2
                entry_r9 = (*(*rcx_25 + 0x10))(rcx_25, &var_148)
                rdi_2 += 1
                rbx_2 = &rbx_2[1]
            while (rdi_2 != rsi_2)
    else if (var_130 == 1)
        int64_t rdi_3 = 0
        int64_t* rbx_3 = *arg2
        uint64_t rsi_4 = sx.q(arg2[1].d) << 3 u>> 3
        
        if (rbx_3 u> &rbx_3[arg2[1]])
            rsi_4 = 0
        
        if (rsi_4 != 0)
            do
                int64_t* rcx_26 = *rbx_3
                entry_r9 = (*(*rcx_26 + 8))(rcx_26, &var_148)
                rdi_3 += 1
                rbx_3 = &rbx_3[1]
            while (rdi_3 != rsi_4)

int64_t var_108 = 0
int32_t var_100 = 0
int16_t* var_f8 = nullptr
int32_t var_f0 = 0
int64_t var_e8 = 0
void* var_d8 = nullptr
void var_c8

while (true)
    void* rdi_4 = **(arg1 + 0x28)
    
    if (rdi_4 == 0)
        break
    
    sub_14189e8e0(&var_108, rdi_4 + 0x10)
    void* rsi_5 = *(arg1 + 0x28)
    *(arg1 + 0x28) = rdi_4
    int64_t var_a8
    memset(&var_a8, 0, 0x60)
    sub_14189e8e0(rdi_4 + 0x10, &var_a8)
    int64_t var_88
    
    if (var_88 != 0)
        void var_68
        void* rcx_30 = &var_68
        void* var_78
        
        if (var_78 != 0)
            rcx_30 = var_78
        
        (*(*rcx_30 + 0x10))(rcx_30)
    
    int64_t var_98
    
    if (var_98 != 0)
        sub_140a74f90(var_98)
    
    int64_t rcx_32 = var_a8
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
    
    if (rsi_5 != 0)
        sub_14189f9f0(rsi_5, 1)
    
    int64_t* i = *arg2
    char r14_1 = 0
    
    for (void* rsi_6 = &i[sx.q(arg2[1].d)]; i != rsi_6; i = &i[1])
        int64_t* rdi_5 = *i
        int64_t var_188 = var_e8
        int64_t var_178 = 0
        
        if (var_e8 != 0)
            void* rcx_34 = &var_c8
            
            if (var_d8 != 0)
                rcx_34 = var_d8
            
            (**rcx_34)(rcx_34, &var_178)
        
        if ((*(*rdi_5 + 0x18))(rdi_5, &var_108, &var_188) != 0)
            r14_1 = 1
            break
    
    if (r14_1 == 0)
        void* var_1b8 = nullptr
        
        if (var_e8 != 0)
            void* rcx_36 = &var_c8
            
            if (var_d8 != 0)
                rcx_36 = var_d8
            
            (**rcx_36)(rcx_36, &var_1b8)
        
        int32_t rbx_5
        
        if (var_f0 == 0)
            rbx_5 = 0
        else
            rbx_5 = var_f0 - 1
        
        int32_t rax_36
        
        if (var_100 == 0)
            rax_36 = var_100 + 2
        
        if (var_100 != 0 || rbx_5 == 0xffffffff)
            rax_36 = 1
        
        int64_t rdx_15 = var_108
        int64_t var_1e8 = 0
        sub_140596860(&var_1e8, rdx_15, var_100, 0, rax_36 + rbx_5)
        sub_140a2cf70(&var_1e8, var_f8, rbx_5)
        void var_1a8
        void* rcx_39 = &var_1a8
        int64_t var_1d8 = var_1e8
        int32_t var_1e0
        int32_t var_1d0_1 = var_1e0
        int32_t var_1dc
        int32_t var_1cc_1 = var_1dc
        void* rax_41 = var_1b8
        var_1e8 = 0
        var_1e0.q = 0
        
        if (rax_41 != 0)
            rcx_39 = rax_41
        
        var_e8((*(*rcx_39 + 8))(rcx_39), &var_1d8)
        int64_t rcx_41 = var_1d8
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        int64_t rcx_42 = var_1e8
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
        
        if (var_e8 != 0)
            void* rax_44 = var_1b8
            void* rcx_43 = &var_1a8
            
            if (rax_44 != 0)
                rcx_43 = rax_44
            
            (*(*rcx_43 + 0x10))(rcx_43)

if (var_e8 != 0)
    void* rcx_44 = &var_c8
    
    if (var_d8 != 0)
        rcx_44 = var_d8
    
    (*(*rcx_44 + 0x10))(rcx_44)

if (var_f8 != 0)
    sub_140a74f90(var_f8)

int64_t rcx_46 = var_108

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

int64_t result = sub_1418aac00(&var_148)
__security_check_cookie(rax_1 ^ &var_218)
return result
