// 函数: sub_14067f970
// 地址: 0x14067f970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int16_t* var_38 = nullptr
int64_t var_30 = 0
sub_140a20ba0(&var_38, &data_142d4056c, 1)

if (arg2[1].d != 0)
    int16_t* r14_1 = *arg2
    int16_t i = *r14_1
    
    while (i != 0)
        uint64_t i_1 = zx.q(i)
        int32_t rax_1 = (i_1 - 8).d
        
        if (rax_1 u> 0x54)
        label_14067fac6:
            
            if (i u< 0x20)
                int64_t var_28
                sub_140a2e390(&var_28, u"\u%04x", i_1)
                int32_t var_20
                int32_t r8_2
                
                if (var_20 == 0)
                    r8_2 = 0
                else
                    r8_2 = var_20 - 1
                
                sub_140a20ba0(&var_38, var_28, r8_2)
                int64_t rcx_14 = var_28
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
            else
                int32_t rdx = var_30.d
                int32_t rsi_1 = rdx - 1
                
                if (rdx s<= 0)
                    rsi_1 = 0
                
                int32_t rax_4
                rax_4.b = rdx s<= 0
                int32_t rax_6 = rax_4 + 1 + rdx
                var_30.d = rax_6
                
                if (rax_6 s> var_30:4.d)
                    sub_140594770(&var_38)
                
                int64_t rcx_11 = sx.q(rsi_1)
                var_38[rcx_11] = i
                var_38[rcx_11 + 1] = 0
        else
            switch (rax_1)
                case 0
                    sub_140a20ba0(&var_38, &data_142d84f00, 2)
                case 1
                    sub_140a20ba0(&var_38, &data_142d84ef8, 2)
                case 2
                    sub_140a20ba0(&var_38, &data_142d84ef0, 2)
                case 3, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                        0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                        0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 
                        0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 
                        0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 
                        0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 
                        0x52, 0x53
                    goto label_14067fac6
                case 4
                    sub_140a20ba0(&var_38, &data_142d84f08, 2)
                case 5
                    sub_140a20ba0(&var_38, &data_142d84f10, 2)
                case 0x1a
                    sub_140a20ba0(&var_38, &data_142d84f18, 2)
                case 0x54
                    sub_140a20ba0(&var_38, &data_142d84ee8, 2)
        
        i = r14_1[1]
        r14_1 = &r14_1[1]

sub_140a20ba0(&var_38, &data_142d4056c, 1)
int32_t rax_9 = var_30.d
int64_t* rcx_16 = *(arg1 + 8)
int16_t* const rdx_2

if (rax_9 == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = var_38
    rdi = rax_9 - 1

int64_t result = (*(*rcx_16 + 0x150))(rcx_16, rdx_2, sx.q(rdi) * 2)
int16_t* rcx_17 = var_38

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
