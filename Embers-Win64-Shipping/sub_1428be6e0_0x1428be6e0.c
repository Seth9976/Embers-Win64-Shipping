// 函数: sub_1428be6e0
// 地址: 0x1428be6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rbp = 0
char* rdx = *arg1
int64_t* rbx = arg3
int64_t* r14 = nullptr

if (*(rdx + 4) == *(*arg2 + 4))
    int32_t rax_1 = arg1[4].d
    int32_t rcx
    
    if (rax_1 != 0)
        rcx = arg2[4].d
    
    if (rax_1 == 0 || rcx == 0 || rax_1 == rcx)
        if ((*rdx & 2) != 0)
            return 0
        
        if (rbx == 0)
            int64_t* rax_3 = sub_1428d8d60()
            rbx = rax_3
            r14 = rax_3
            
            if (rax_3 == 0)
                return zx.q((r14 - 1).d)
        
        sub_1428d8e50(rbx)
        int64_t* rax_5 = sub_1428d8ba0(rbx)
        int64_t* rax_6 = sub_1428d8ba0(rbx)
        int64_t* rax_7 = sub_1428d8ba0(rbx)
        int64_t* rax_8 = sub_1428d8ba0(rbx)
        int64_t* rax_9 = sub_1428d8ba0(rbx)
        int64_t* rax_10 = sub_1428d8ba0(rbx)
        
        if (rax_10 != 0)
            if ((*(*arg1 + 0x30))(arg1, rax_5, rax_6, rax_7, rbx) == 0)
                goto label_1428be910
            
            if ((*(*arg2 + 0x30))(arg2, rax_8, rax_9, rax_10, rbx) == 0)
                goto label_1428be910
            
            if (sub_14288fc80(rax_5, rax_8) != 0)
                goto label_1428be910
            
            if (sub_14288fc80(rax_6, rax_9) != 0)
                goto label_1428be910
            
            int32_t rax_17 = sub_14288fc80(rax_7, rax_10)
            
            if (rax_17 != 0)
                goto label_1428be910
            
            void* rcx_13 = *arg1
            int64_t* r8_2 = arg2[1]
            int64_t* rdx_6 = arg1[1]
            int64_t r10_1 = *(rcx_13 + 0xd8)
            int64_t* var_48_2
            int32_t r8_3
            
            if (r10_1 == 0)
                var_48_2.d = 0x362
                r8_3 = rax_17 + 0x42
            label_1428be90b:
                sub_1428a5670(0x10, 0x71, r8_3, "crypto\ec\ec_lib.c", var_48_2.d)
            label_1428be910:
                rbp = 1
            label_1428be918:
                sub_1428d8a60(rbx)
                sub_1428d8ae0(r14)
                return zx.q(rbp)
            
            if (rcx_13 != *rdx_6)
            label_1428be8ee:
                var_48_2.d = 0x366
                r8_3 = 0x65
                goto label_1428be90b
            
            int32_t rax_18 = arg1[4].d
            int32_t r9_3
            
            if (rax_18 != 0)
                r9_3 = rdx_6[1].d
            
            if (rax_18 != 0 && r9_3 != 0)
                if (rax_18 != r9_3 || rcx_13 != *r8_2)
                    goto label_1428be8ee
                
                goto label_1428be89f
            
            if (rcx_13 != *r8_2)
                goto label_1428be8ee
            
        label_1428be89f:
            int32_t rcx_14
            
            if (rax_18 != 0)
                rcx_14 = r8_2[1].d
            
            if (rax_18 != 0 && rcx_14 != 0 && rax_18 != rcx_14)
                goto label_1428be8ee
            
            if (r10_1(arg1, rdx_6, r8_2, rbx) != 0)
                goto label_1428be910
            
            int64_t* rcx_16 = arg1[2]
            int64_t* rdi_1 = arg1[3]
            int64_t* r15_1 = arg2[3]
            
            if (rcx_16 != 0)
                int64_t* rdx_7 = arg2[2]
                
                if (rdx_7 != 0)
                    if (sub_14288fc80(rcx_16, rdx_7) != 0)
                        goto label_1428be910
                    
                    if (sub_14288fc80(rdi_1, r15_1) == 0)
                        goto label_1428be918
                    
                    goto label_1428be910
        
        sub_1428d8a60(rbx)
        sub_1428d8ae0(r14)
        return 0xffffffff

return 1
