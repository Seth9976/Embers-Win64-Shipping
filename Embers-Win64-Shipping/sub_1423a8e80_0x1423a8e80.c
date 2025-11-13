// 函数: sub_1423a8e80
// 地址: 0x1423a8e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_78 = nullptr
int64_t var_70 = 0
sub_1405947f0(&var_78, 9)
int32_t r15 = var_70:4.d
int32_t rdi = var_70.d + 9
var_70.d = rdi

if (rdi s> r15)
    sub_140594770(&var_78)
    r15 = var_70:4.d
    rdi = var_70.d

int16_t* rsi = var_78
int16_t var_88 = 0x3f
sub_1405a7220(rsi, 9, "/Script/", 9, 0x3f)
int64_t var_48
int64_t* rax = sub_140b63b70(arg1, &var_48)
int32_t rax_1
int16_t* rdi_1

if (rdi s> 1)
    int32_t r14_1 = rax[1].d
    int32_t r14_2
    
    if (r14_1 == 0)
        r14_2 = 0
    else
        r14_2 = r14_1 - 1
    
    int32_t rax_2
    
    if (rdi == 0)
        rax_2 = rdi + 1
    
    if (rdi != 0 || r14_2 == 0)
        rax_2 = 0
    
    var_78 = rsi
    int32_t rdx_3 = rdi + rax_2 + r14_2
    var_70.d = rdi
    var_70:4.d = r15
    rsi = nullptr
    
    if (rdx_3 s> r15)
        sub_1405947f0(&var_78, rdx_3)
    
    sub_140a20ba0(&var_78, *rax, r14_2)
    rax_1 = var_70.d
    rdi_1 = var_78
    int64_t var_70_1 = 0
    var_78 = nullptr
else
    rdi_1 = *rax
    *rax = 0
    rax_1 = rax[1].d
    rax[1] = 0

int16_t* const rdx_5 = &data_142d40450

if (rax_1 != 0)
    rdx_5 = rdi_1

uint64_t result = sub_140d1fe00(nullptr, rdx_5)
uint64_t result_3 = result

if (rdi_1 != 0)
    result = sub_140a74f90(rdi_1)

if (rsi != 0)
    result = sub_140a74f90(rsi)

int64_t rcx_8 = var_48

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

if (result_3 != 0)
    int64_t arg_18 = 0
    int64_t var_68 = 0
    int32_t var_5c_1 = 0
    int32_t r13_1 = 0
    int64_t* var_58 = nullptr
    int64_t rsi_1 = 0
    int32_t result_1 = 0
    int32_t r14_3 = 0
    var_88.d = 0
    sub_140d3ccc0(result_3, &var_58, 0, 0, 0)
    int64_t* r12_1 = var_58
    result = sx.q(result_1)
    uint64_t result_4 = &r12_1[result]
    uint64_t result_2 = result_4
    
    if (r12_1 != result_4)
        result = result_4
        int64_t* var_60
        
        do
            int64_t* rbx_2 = *r12_1
            
            if (rbx_2 != 0)
                void* rax_3 = sub_140bdf2e0()
                void* rdx_7 = rbx_2[2]
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s<= *(rdx_7 + 0x38) && *(*(rdx_7 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30
                        && (*(rbx_2 + 0xcc) & 1) == 0)
                    void* rax_6 = sub_1425b3980()
                    
                    if (rax_6 != 0)
                        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                        
                        if (rax_7.d s<= rbx_2[7].d && *(rbx_2[6] + (rax_7 << 3)) == rax_6 + 0x30)
                            int64_t rdi_2 = sx.q(r13_1)
                            r13_1 = (rdi_2 + 1).d
                            var_60.d = r13_1
                            
                            if (r13_1 s> r14_3)
                                sub_1405a4d70(&var_68)
                                rsi_1 = var_68
                                r13_1 = var_60.d
                                arg_18 = rsi_1
                            
                            *(rsi_1 + (rdi_2 << 3)) = rbx_2
                            int64_t* rsi_2 = data_143f5a3e8
                            void* rcx_13 = &rsi_2[sx.q(data_143f5a3f0)]
                            int64_t r14_4 = 0
                            uint64_t r15_4 = (rcx_13 - rsi_2 + 7) u>> 3
                            
                            if (rsi_2 u> rcx_13)
                                r15_4 = 0
                            
                            if (r15_4 != 0)
                                do
                                    void* rdi_3 = *rsi_2
                                    
                                    if (*(rdi_3 + 0xb0) != 0)
                                        void* rax_10 = sub_1425b3a40()
                                        
                                        if (rax_10 != 0)
                                            void* rdx_10 = *(rdi_3 + 0xb0)
                                            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                                            int64_t r8_3 = sx.q(*(rdx_10 + 0x38))
                                            
                                            if (rax_11.d s<= r8_3.d
                                                    && *(*(rdx_10 + 0x30) + (rax_11 << 3))
                                                    == rax_10 + 0x30 && rdx_10 != 0
                                                    && r8_3.d s<= rbx_2[7].d
                                                    && *(rbx_2[6] + (r8_3 << 3)) == rdx_10 + 0x30)
                                                sub_1423a8920(rdi_3, rbx_2)
                                    
                                    rsi_2 = &rsi_2[1]
                                    r14_4 += 1
                                while (r14_4 != r15_4)
                            
                            r14_3 = var_5c_1
                            rsi_1 = arg_18
                
                result = result_2
            
            r12_1 = &r12_1[1]
        while (r12_1 != result)
        
        if (r13_1 s> 0)
            sub_140de7870(&data_143a2ffb0, &var_68)
            *var_60 = *arg1
            var_60[1] = rsi_1
            rsi_1 = 0
            var_60[2].d = r13_1
            *(var_60 + 0x14) = r14_3
            var_60[3].d = 0xffffffff
            int64_t rbx_3 = *var_60
            int32_t r8_4 = (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d)
            var_88.d = var_68.d
            result = sub_1408d7020(&data_143a2ffb0, &result_2, r8_4, var_60, var_88, nullptr)
        
        r12_1 = var_58
    
    if (r12_1 != 0)
        result = sub_140a74f90(r12_1)
    
    if (rsi_1 != 0)
        return sub_140a74f90(rsi_1)

return result
