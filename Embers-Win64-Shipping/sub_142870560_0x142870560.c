// 函数: sub_142870560
// 地址: 0x142870560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* result = nullptr
char arg_8 = 0
int32_t* r12 = arg2
char arg_20 = 0
int32_t* r13 = nullptr
int32_t* rbp_1

if ((*(*(arg1 + 0x488) + 0x1c) & 0x30000) != 0)
label_142870620:
    rbp_1 = arg3
else
    int32_t rax_1 = arg1[0x171]
    
    if (not(test_bit(rax_1, 0x16)))
        rbp_1 = r12
        r12 = arg3
    else
        rbp_1 = arg3
        
        if (test_bit(rax_1, 0x15) && sub_142898c70(r12) s> 0
                && *(sub_142898ea0(r12, 0) + 0x24) == 0x80000)
            int32_t rax_4 = sub_142898c70(arg3)
            int32_t rbx_1 = 0
            
            if (rax_4 s> 0)
                void* rax_5
                
                while (true)
                    rax_5 = sub_142898ea0(arg3, rbx_1)
                    
                    if (*(rax_5 + 0x24) == 0x80000)
                        break
                    
                    rbx_1 += 1
                    
                    if (rbx_1 s>= rax_4)
                        goto label_142870620_1
                
                int32_t* rax_9 = sub_142898be0(0, rax_4)
                r13 = rax_9
                
                if (rax_9 == 0)
                label_142870620_1:
                    rbp_1 = arg3
                else
                    sub_142898d50(rax_9, rax_5)
                    
                    for (int32_t i = rbx_1 + 1; i s< rax_4; i += 1)
                        void* rax_10 = sub_142898ea0(arg3, i)
                        
                        if (*(rax_10 + 0x24) == 0x80000)
                            sub_142898d50(r13, rax_10)
                    
                    int32_t rbx_3 = 0
                    
                    do
                        void* rax_11 = sub_142898ea0(arg3, rbx_3)
                        
                        if (*(rax_11 + 0x24) != 0x80000)
                            sub_142898d50(r13, rax_11)
                        
                        rbx_3 += 1
                    while (rbx_3 s< rax_4)
                    
                    rbp_1 = r13

int32_t* rcx_4 = *(arg1 + 8)
int32_t rax_7

if ((*(*(rcx_4 + 0xc0) + 0x60) & 8) == 0)
    rax_7 = *rcx_4

int64_t var_48

if ((*(*(rcx_4 + 0xc0) + 0x60) & 8) != 0 || rax_7 s< 0x304 || rax_7 == 0x10000)
    sub_142865810(arg1)
    sub_1428522b0(arg1)
    var_48 = 0
else
    var_48 = 0
    
    if (*(arg1 + 0x580) != 0)
        int32_t r8 = 0
        int64_t rdx_1 = 0
        
        for (int64_t i_1 = 0; i_1 s< 0x168; i_1 += 0x28)
            if (rdx_1 u<= 8)
                int64_t rax_8 = *(arg1 + 0x488)
                
                if (*(i_1 + rax_8 + 0x20) != 0 && *(i_1 + rax_8 + 0x28) != 0)
                    break
            
            r8 += 1
            rdx_1 += 1
        
        int64_t rbx_2 = 0
        
        if (r8 == 9)
            rbx_2 = 1
        
        var_48 = rbx_2

int32_t rsi_1 = 0

if (sub_142898c70(rbp_1) s> 0)
    int32_t rax_28
    
    do
        void* rax_13 = sub_142898ea0(rbp_1, rsi_1)
        int32_t* rcx_14 = *(arg1 + 8)
        int32_t rdx_9 = *arg1
        
        if ((*(*(rcx_14 + 0xc0) + 0x60) & 8) != 0)
            int32_t rax_16 = *(rax_13 + 0x34)
            int32_t rcx_15 = rdx_9
            
            if (rdx_9 == 0x100)
                rcx_15 = 0xff00
            
            if (rax_16 == 0x100)
                rax_16 = 0xff00
            
            if (rcx_15 s<= rax_16)
                int32_t rax_17 = *(rax_13 + 0x38)
                
                if (rdx_9 == 0x100)
                    rdx_9 = 0xff00
                
                if (rax_17 == 0x100)
                    rax_17 = 0xff00
                
                if (rdx_9 s>= rax_17)
                    goto label_1428707f3
        else if (rdx_9 s>= *(rax_13 + 0x2c) && rdx_9 s<= *(rax_13 + 0x30))
            int32_t rax_15 = *rcx_14
            
            if (rax_15 s< 0x304 || rax_15 == 0x10000)
            label_1428707f3:
                void* rax_18 = *(arg1 + 0xa8)
                int32_t rdi_2 = *(rax_13 + 0x1c)
                arg_8 = rdi_2.b
                int32_t rcx_16 = *(rax_18 + 0x338)
                int32_t rdx_10 = *(rax_18 + 0x334)
                int32_t r8_2 = rcx_16 | 0x40
                int32_t rax_20 = arg1[0x1fd] & 0x20
                
                if (rax_20 == 0)
                    r8_2 = rcx_16
                
                int32_t rcx_18 = rdx_10 | 0x20
                int32_t rax_21 = *(rax_13 + 0x20)
                arg_20 = rax_21.b
                
                if (rax_20 == 0)
                    rcx_18 = rdx_10
                
                if ((rdi_2 & 0x1c8) == 0 || *(arg1 + 0x580) != 0)
                    int32_t rax_22
                    
                    if ((rdi_2 & rcx_18) == 0 || (rax_21 & r8_2) == 0)
                        rax_22 = 0
                    else
                        rax_22 = 1
                    
                    if ((rdi_2.b & 4) == 0)
                        goto label_14287087a
                    
                    if (rax_22 != 0)
                        rax_22 = sub_142864dc0(arg1, *(rax_13 + 0x18))
                    label_14287087a:
                        
                        if (rax_22 != 0)
                            goto label_142870888
            else
            label_142870888:
                int32_t rax_23 = sub_1428989f0(r12, rax_13)
                
                if (rax_23 s>= 0 && sub_1428546e0(arg1, 0x10002, *(rax_13 + 0x44), 0, rax_13) != 0)
                    if ((arg_8 & 4) == 0 || (arg_20 & 8) == 0 || *(*(arg1 + 0xa8) + 0x404) == 0)
                        void* result_1 = sub_142898ea0(r12, rax_23)
                        
                        if (var_48 == 0)
                            result = result_1
                            break
                        
                        if (sub_14285b4c0((*(result_1 + 0x40)).b) == &data_1434e91b0)
                            result = result_1
                            break
                        
                        if (result == 0)
                            result = result_1
                    else if (result == 0)
                        result = sub_142898ea0(r12, rax_23)
        
        rsi_1 += 1
        rax_28 = sub_142898c70(rbp_1)
    while (rsi_1 s< rax_28)

sub_142898a10(r13)
return result
