// 函数: sub_1428f46d0
// 地址: 0x1428f46d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t arg_20 = 0xffffffff
int32_t r15 = 0
int64_t* rdi = nullptr
int32_t var_48 = 0
void* r13 = arg1
char* rax = strchr(arg1, 0x2e)

if (rax != 0)
    r13 = &rax[1]

int32_t* rax_1 = sub_1428f35e0(arg3, arg2)
int32_t* rbx_1 = rax_1

if (rax_1 == 0)
    sub_1428a5670((rax_1 + 0x26).d, 0xbc, 0x95, "crypto\engine\eng_cnf.c", 0x3d)
    return 0

int32_t r12 = 0

if (sub_142898c70(rax_1) s<= 0)
label_1428f4a36:
    r15 = 1
else
    while (true)
        int64_t* rax_4 = sub_142898ea0(rbx_1, r12)
        int64_t* r14_1 = rax_4
        void* rbx_2 = rax_4[1]
        char* rax_5 = strchr(rbx_2, 0x2e)
        
        if (rax_5 != 0)
            rbx_2 = &rax_5[1]
        
        void* rbp_1 = r14_1[2]
        
        if (strcmp(rbx_2, "engine_id") != 0)
            if (strcmp(rbx_2, "soft_load") == 0)
                var_48 = 1
                goto label_1428f4982
            
            if (strcmp(rbx_2, "dynamic_path") == 0)
                int64_t* rax_9 = sub_142921c80("dynamic")
                rdi = rax_9
                
                if (
                        rax_9 != 0 && sub_142933c40(rax_9, "SO_PATH", rbp_1, 0) != 0 &&
                            sub_142933c40(rdi, "LIST_ADD", 
                            &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[1], 
                        0) != 0 && sub_142933c40(rdi, "LOAD", nullptr, 0) != 0)
                    goto label_1428f4982
            else if (rdi != 0)
            label_1428f489b:
                int64_t rax_14 = 0
                bool cond:0_1
                
                while (true)
                    char rcx_12 = *(rbp_1 + rax_14)
                    rax_14 += 1
                    char temp0_1 = *(rax_14 + 0x143517a97)
                    cond:0_1 = rcx_12 != temp0_1
                    
                    if (rcx_12 != temp0_1)
                        break
                    
                    if (rax_14 == 6)
                        cond:0_1 = rcx_12 != *(rax_14 + 0x143517a97)
                        break
                
                char* rsi_1 = nullptr
                int64_t rcx_13 = 0
                
                if (cond:0_1)
                    rsi_1 = rbp_1
                
                int32_t rax_18
                
                while (true)
                    char rax_15 = *(rbx_2 + rcx_13)
                    rcx_13 += 1
                    
                    if (rax_15 != *(rcx_13 + 0x143517a9f))
                        break
                    
                    if (rcx_13 == 5)
                        if (sub_1428f34b0(arg3, arg2, "init", &arg_20) == 0)
                            goto label_1428f49c6
                        
                        int32_t rax_17 = arg_20
                        
                        if (rax_17 == 1)
                            rax_18 = sub_1428f4a70(rdi)
                            goto label_1428f4977
                        
                        if (rax_17 == 0)
                            goto label_1428f4982
                        
                        sub_1428a5670(0x26, 0xbc, 0x97, "crypto\engine\eng_cnf.c", 0x7a)
                        goto label_1428f49c6
                
                if (strcmp(rbx_2, "default_algorithms") != 0)
                    rax_18 = sub_142933c40(rdi, rbx_2, rsi_1, 0)
                else
                    rax_18 = sub_1428de1b0(rdi, rsi_1)
                
            label_1428f4977:
                
                if (rax_18 != 0)
                    goto label_1428f4982
            else
                int64_t* rax_13 = sub_142921c80(r13)
                rdi = rax_13
                
                if (rax_13 != 0)
                    goto label_1428f489b
                
                if (var_48 != 0)
                    sub_1428a49e0()
                    return 1
        else
            r13 = rbp_1
        label_1428f4982:
            rbx_1 = rax_1
            r12 += 1
            
            if (r12 s< sub_142898c70(rbx_1))
                continue
            else
                if (rdi == 0)
                    goto label_1428f4a36
                
                if (arg_20 != 0xffffffff)
                    goto label_1428f4a36
                
                if (sub_1428f4a70(rdi) != 0)
                    goto label_1428f4a36
                
                r14_1 = nullptr
        
    label_1428f49c6:
        int32_t var_68_1 = 0x8d
        sub_1428a5670(0x26, 0xbc, 0x66, "crypto\engine\eng_cnf.c", 0x8d)
        
        if (r14_1 != 0)
            *r14_1
            int64_t var_58_1 = r14_1[2]
            char const* const var_60_1 = ", value="
            var_68_1.q = r14_1[1]
            sub_1428a4880(6)
        
        break

sub_1428e2fb0(rdi)
return zx.q(r15)
