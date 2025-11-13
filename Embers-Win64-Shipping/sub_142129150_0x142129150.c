// 函数: sub_142129150
// 地址: 0x142129150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg3
arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405c5570(arg2, 0)

int32_t var_58 = 0
int32_t r13 = 0
int32_t var_54 = 2
char var_38

if (arg4 == 0)
    if (rsi == 3)
        rsi = data_143a30368:0xc.d
    
    var_38 = 1
    char var_30_1 = 0
    var_38.o = var_38.o
    r13 = rsi
    var_54 = rsi
    var_58 = r13

int32_t rbp = arg5
int32_t i_1 = 0
int32_t result_1 = 3

if (arg6 == 0)
    var_38 = 1
    char var_30_2 = 0
    
    if (rbp == 4)
        rbp = data_1439c7a08
    
    var_38.o = var_38.o
    result_1 = rbp
    i_1 = rbp

int64_t* rax_5 = (*(*arg1 + 0x260))(arg1)
int64_t* var_48 = rax_5
int64_t* rbx = arg1

if (rax_5 != 0)
    int64_t result = sub_142111e70(rax_5)
    
    if (result.b == 0)
        int64_t* r9
        
        while (true)
            if ((rbx[0x1b].b & 1) != 0)
                r9 = rbx
                var_48 = rbx
                break
            
            rbx = rbx[0x1a]
            
            if (rbx != 0)
                void* rax_6 = sub_142543020()
                void* rdx = rbx[2]
                result = sx.q(*(rax_6 + 0x38))
                
                if (result.d s<= *(rdx + 0x38))
                    int64_t result_2 = result
                    result = *(rdx + 0x30)
                    
                    if (*(result + (result_2 << 3)) == rax_6 + 0x30)
                        continue
            
            r9 = var_48
            break
        
        if (r13 s<= var_54)
            result = zx.q(result_1)
            
            do
                int32_t i = i_1
                int32_t i_2 = i
                
                while (i s<= result.d)
                    void* rax_8 = (*(*r9 + 0x2e0))(r9, zx.q(i), zx.q(r13))
                    
                    if (rax_8 != 0)
                        void* rax_9 = sub_142129070(rax_8)
                        int32_t j = 0
                        int32_t* rbp_1 = rax_9 + 0x48
                        
                        do
                            int32_t k = 0
                            
                            if (*rbp_1 s> 0)
                                do
                                    char var_68_1 = 1
                                    char var_70
                                    var_70.q = &var_38
                                    int32_t var_78
                                    var_78.q = rax_8
                                    var_38.q = 0
                                    sub_142148880(rax_9, j, k, arg1, var_78, var_70)
                                    int64_t rcx_6 = var_38.q
                                    
                                    if (rcx_6 != 0)
                                        uint64_t r8_3 = *arg2
                                        int64_t r9_2 = sx.q(arg2[1].d)
                                        uint64_t rax_10 = r8_3
                                        int64_t rdx_3 = r8_3 + (r9_2 << 3)
                                        
                                        if (r8_3 != rdx_3)
                                            while (*rax_10 != rcx_6)
                                                rax_10 += 8
                                                
                                                if (rax_10 == rdx_3)
                                                    goto label_14212938c
                                        
                                        if (r8_3 == rdx_3
                                            || ((rax_10 - r8_3) s>> 3).d == 0xffffffff)
                                        label_14212938c:
                                            int32_t rax_13 = (r9_2 + 1).d
                                            arg2[1].d = rax_13
                                            
                                            if (rax_13 s> *(arg2 + 0xc))
                                                sub_1405a4d70(arg2)
                                                rcx_6 = var_38.q
                                            
                                            *(*arg2 + (r9_2 << 3)) = rcx_6
                                    
                                    k += 1
                                while (k s< *rbp_1)
                            
                            j += 1
                            rbp_1 = &rbp_1[4]
                        while (j u< 5)
                        
                        r13 = var_58
                    
                    result = zx.q(result_1)
                    i = i_2 + 1
                    r9 = var_48
                    i_2 = i
                
                r9 = var_48
                r13 += 1
                var_58 = r13
            while (r13 s<= var_54)
        
        return result

int64_t* rax_15 = sub_14210f630(0)
return (*(*rax_15 + 0x2a0))(rax_15, arg2, zx.q(rsi), zx.q(arg4), rbp, arg6)
