// 函数: sub_142859110
// 地址: 0x142859110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rax = 0
int64_t var_50_1

if (arg8 != 3)
    var_50_1 = 0

if (arg8 == 3 || arg8 == 6)
    rax = 1
    var_50_1 = 1

int64_t* r9 = *arg10
int64_t* r10 = *arg11
int64_t* rdx = r9

if (rax == 0)
    rdx = r10

if (rdx == 0)
    *arg10 = r9
    *arg11 = r10
    return rax

int64_t* rcx_1 = rdx
int64_t* r15 = r10

if (rax == 0)
    r15 = r9

int64_t* rax_1

do
    int64_t* rbp_1 = r10
    int64_t* r8_1 = r9
    int64_t* rdi_1 = r15
    int64_t* r14_1 = r15
    rax_1 = r15
    int64_t* rbx_1 = r15
    
    if (r15 == 0)
        break
    
    if (var_50_1 == 0)
        r15 = r15[2]
    else
        r15 = r15[3]
    
    void* rdx_1 = *rax_1
    int32_t r12_1 = arg8
    
    if (arg9 s< 0)
        if (arg1 == 0 || arg1 == *(rdx_1 + 0x18))
            rcx_1 = rdx
            
            if ((arg2 == 0 || (*(rdx_1 + 0x1c) & arg2) != 0)
                    && (arg3 == 0 || (*(rdx_1 + 0x20) & arg3) != 0))
                if (arg4 != 0)
                    rcx_1 = rdx
                
                if (arg4 == 0 || (*(rdx_1 + 0x24) & arg4) != 0)
                    if (arg5 != 0)
                        rcx_1 = rdx
                    
                    if (arg5 == 0 || (*(rdx_1 + 0x28) & arg5) != 0)
                        r12_1 = arg8
                        
                        if (arg6 != 0)
                            r12_1 = arg8
                        
                        if (arg6 == 0 || arg6 == *(rdx_1 + 0x2c))
                            if (((arg7 & 0x1f) == 0 || ((*(rdx_1 + 0x3c)).b & arg7 & 0x1f) != 0) &&
                                    ((arg7 & 0x20) == 0
                                    || ((*(rdx_1 + 0x3c)).b & arg7 & 0x20) != 0))
                                goto label_1428592ea
                            
                            rcx_1 = rdx
    else if (arg9 == *(rdx_1 + 0x44))
    label_1428592ea:
        
        if (r12_1 != 1)
            if (r12_1 != 4)
                if (r12_1 != 3)
                    if (r12_1 != 6)
                        if (r12_1 == 2)
                            int64_t* rdx_6 = rbx_1[2]
                            
                            if (r9 != rax_1)
                                *(rax_1[3] + 0x10) = rdx_6
                                rdx_6 = rdi_1[2]
                            else
                                r9 = rdx_6
                            
                            int64_t* r8_2 = rax_1[3]
                            r10 = r8_2
                            
                            if (rbp_1 != rax_1)
                                r10 = rbp_1
                            
                            rax_1[1].d = 0
                            
                            if (rdx_6 != 0)
                                rdx_6[3] = r8_2
                                r8_2 = r14_1[3]
                            
                            if (r8_2 != 0)
                                r8_2[2] = rax_1[2]
                            
                            rax_1[2] = 0
                            rax_1[3] = 0
                    else if (rax_1[1].d != 0 && rax_1 != r9)
                        int64_t* rdx_5 = rax_1[3]
                        void* rcx_14 = rax_1[2]
                        r10 = rdx_5
                        
                        if (rax_1 != rbp_1)
                            r10 = rbp_1
                        
                        if (rcx_14 != 0)
                            *(rcx_14 + 0x18) = rdx_5
                            rdx_5 = r14_1[3]
                        
                        if (rdx_5 != 0)
                            rdx_5[2] = rax_1[2]
                        
                        r9[3] = rax_1
                        rax_1[2] = r9
                        r9 = rax_1
                        rax_1[3] = 0
                else if (rax_1[1].d != 0)
                    if (rax_1 == r9)
                        rax_1[1].d = 0
                    else
                        int64_t* rdx_4 = rax_1[3]
                        bool cond:11_1 = rax_1 != r10
                        void* rcx_12 = rax_1[2]
                        r10 = rdx_4
                        
                        if (cond:11_1)
                            r10 = rbp_1
                        
                        if (rcx_12 != 0)
                            *(rcx_12 + 0x18) = rdx_4
                            rdx_4 = r14_1[3]
                        
                        if (rdx_4 != 0)
                            rdx_4[2] = rax_1[2]
                        
                        r9[3] = rax_1
                        rax_1[2] = r9
                        r9 = rax_1
                        rax_1[3] = 0
                        rax_1[1].d = 0
            else if (rax_1[1].d != 0 && rax_1 != r10)
                int64_t* rdx_3 = rax_1[2]
                void* rcx_10 = rax_1[3]
                r9 = rdx_3
                
                if (rax_1 != r8_1)
                    r9 = r8_1
                
                if (rcx_10 != 0)
                    *(rcx_10 + 0x10) = rdx_3
                    rdx_3 = r14_1[2]
                
                if (rdx_3 != 0)
                    rdx_3[3] = rax_1[3]
                
                r10[2] = rax_1
                rax_1[3] = r10
                r10 = rax_1
                rax_1[2] = 0
            
            rcx_1 = rdx
        else
            if (rax_1[1].d == 0)
                if (rax_1 != r10)
                    int64_t* rdx_2 = rax_1[2]
                    bool cond:8_1 = rax_1 != r9
                    void* rcx_8 = rax_1[3]
                    r9 = rdx_2
                    
                    if (cond:8_1)
                        r9 = r8_1
                    
                    if (rcx_8 != 0)
                        *(rcx_8 + 0x10) = rdx_2
                        rdx_2 = r14_1[2]
                    
                    if (rdx_2 != 0)
                        rdx_2[3] = rax_1[3]
                    
                    r10[2] = rax_1
                    rax_1[3] = r10
                    r10 = rax_1
                    rax_1[2] = 0
                
                rax_1[1].d = 1
            
            rcx_1 = rdx
while (rax_1 != rcx_1)
*arg10 = r9
*arg11 = r10
return arg11
