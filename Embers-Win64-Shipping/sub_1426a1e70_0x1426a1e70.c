// 函数: sub_1426a1e70
// 地址: 0x1426a1e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20
sub_141dc5010(&var_20)
int64_t var_38
uint64_t var_18[0x2]

if (arg2 != 0)
    int64_t* rax_1 = sub_142437e30(arg2, 0, 1)
    
    if (rax_1 != 0)
        int64_t r8_2 = *rax_1
        int64_t* rax_2 = (*(r8_2 + 0x668))(rax_1, &var_38, r8_2)
        var_20 = *rax_2
        sub_140597df0(&var_18, &rax_2[1])
        int64_t var_30
        
        if (var_30 != 0)
            sub_140a74f90(var_30)

void* result = nullptr

if (var_20 != 0)
    int64_t* rax_3 = sub_140d30800(&var_20, &var_38)
    int16_t* rbx_1
    
    if (rax_3[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_3
    
    void* rax_5 = sub_140d2f240(sub_142458280(), 0, rbx_1, 0, 0, 0)
    int64_t rcx_8 = var_38
    void* rsi_1 = rax_5
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    if (rsi_1 != 0)
        void* rax_6 = sub_142458280()
        
        if (rax_6 != 0)
            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
            
            if (rax_7.d s<= *(rsi_1 + 0x38) && *(*(rsi_1 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
                void* rax_9 = sub_142458280()
                int64_t rax_10
                
                if (rax_9 != 0)
                    rax_10 = sx.q(*(rax_9 + 0x38))
                
                if (rax_9 == 0 || rax_10.d s> *(rsi_1 + 0x38)
                        || *(*(rsi_1 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                    rsi_1 = nullptr
                
                if ((1 & sub_140b5b8a0(0, 0)) != 0)
                    sub_140d19010(arg2, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                result = sub_140d2dfc0(rsi_1, arg2, 0, 0, 0, 0, 0, 0, 0)

uint64_t rcx_13 = var_18[0]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return result
