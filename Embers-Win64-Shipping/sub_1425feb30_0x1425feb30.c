// 函数: sub_1425feb30
// 地址: 0x1425feb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4b8
int64_t rax_1 = __security_cookie ^ &var_4b8
uint64_t result = zx.q(*(arg2 + 0xc))
int64_t* rbx = *arg2
void* rsi = arg1
int32_t i_2 = arg2[1].d

if (result.d s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx = &rbx[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = zx.q(*(arg2 + 0xc))
    
    arg2[1].d = 0
    
    if (result.d != 0)
        result = sub_14061cd70(arg2, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx = *rbx
            
            if (rcx != 0)
                result = sub_140a74f90(rcx)
            
            rbx = &rbx[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg2[1].d = 0

int64_t* rcx_3 = *(rsi + 8)
int32_t var_498 = 0

if (rcx_3 != 0)
    result = (*(*rcx_3 + 0x18))(rcx_3, &var_498)
    
    if (result.d == 0)
        int32_t r12_1 = 0
        
        if (var_498 u> result.d)
            do
                int64_t* rcx_4 = *(rsi + 8)
                void var_478
                result = (*(*rcx_4 + 0x20))(rcx_4, zx.q(r12_1), &var_478)
                
                if (result.d == 0)
                    int64_t r14_1 = 0
                    int64_t var_490 = 0
                    int32_t rsi_1 = 0
                    int64_t var_488_1 = 0
                    int32_t r15_1 = 0
                    int16_t var_278[0x118]
                    
                    if (var_278[0] != result.w)
                        int64_t rbx_1 = -1
                        
                        do
                            rbx_1 += 1
                        while (var_278[rbx_1] != 0)
                        
                        if (rbx_1.d + 1 s> 0)
                            sub_1405947f0(&var_490, rbx_1.d + 1)
                            r15_1 = var_488_1:4.d
                            rsi_1 = var_488_1.d
                            r14_1 = var_490
                        
                        rsi_1 += rbx_1.d + 1
                        var_488_1.d = rsi_1
                        
                        if (rsi_1 s> r15_1)
                            sub_140594770(&var_490)
                            r15_1 = var_488_1:4.d
                            rsi_1 = var_488_1.d
                            r14_1 = var_490
                        
                        UnDecorator::getReferenceType(r14_1, &var_278, (rbx_1.d + 1) * 2)
                    
                    int64_t rbx_3 = sx.q(arg2[1].d)
                    int32_t rax_4 = (rbx_3 + 1).d
                    arg2[1].d = rax_4
                    
                    if (rax_4 s> *(arg2 + 0xc))
                        sub_1405a4f90(arg2)
                    
                    var_490 = 0
                    result = (rbx_3 << 4) + *arg2
                    int64_t var_488_2 = 0
                    *result = r14_1
                    *(result + 8) = rsi_1
                    rsi = arg1
                    *(result + 0xc) = r15_1
                
                r12_1 += 1
            while (r12_1 u< var_498)

__security_check_cookie(rax_1 ^ &var_4b8)
return result
