// 函数: sub_140d06df0
// 地址: 0x140d06df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_40 = arg6
int64_t result = sub_140cdfca0(arg1, arg2, arg3, arg4, arg5)
bool var_38
int64_t* var_28

if (result != 0)
    (*(*arg1 + 0x158))(arg1, arg3)
    void* rax_2 = (*(*arg1 + 0x140))(arg1, arg3)
    
    if (rax_2 != 0)
        void* rax_3 = sub_140cddb10()
        void* rcx_2 = *(rax_2 + 0x10)
        int64_t rdx_2 = sx.q(*(rax_3 + 0x38))
        
        if (rdx_2.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_2 << 3)) == rax_3 + 0x30)
            char rax_5 = data_143de5452
            var_38 = rax_5 == 0
            
            if (rax_5 == 0)
                sub_140ce3390(&var_38, arg5)
            
            char var_20_1 = 0
            var_28 = arg1
            var_28.o = var_28.o
            sub_140cd75b0(rax_2 + 0x230, &var_28)
            
            if (var_38 != 0)
                sub_140ce3090()

if (result != 0)
    void* rax_7 = (*(*arg1 + 0x140))(arg1, arg3)
    
    if (rax_7 != 0)
        void* rax_8 = sub_140bdf2e0()
        void* rdx_6 = *(rax_7 + 0x10)
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_9.d s<= *(rdx_6 + 0x38) && *(*(rdx_6 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
            uint64_t rax_11
            
            if (arg5 == 0)
                rax_11 = sub_140cbccd0(arg1)
            else
                rax_11 = sub_140d3cb50(*(arg5 + 0x10))
            
            void* r14_1 = arg1[0x10]
            uint64_t rbp_1 = rax_11
            
            if (r14_1 == 0)
                rax_11.b = 0
            else
                void* rax_12 = sub_140cddb10()
                void* rdx_7 = *(r14_1 + 0x10)
                rax_11 = sx.q(*(rax_12 + 0x38))
                
                if (rax_11.d s> *(rdx_7 + 0x38))
                    rax_11.b = 0
                else if (*(*(rdx_7 + 0x30) + (rax_11 << 3)) != rax_12 + 0x30)
                    rax_11.b = 0
                else if (sub_140ce1120(r14_1 + 0x230).b != 0)
                    rax_11.b = 0
                else
                    rax_11.b = 1
            
            if (rax_11.b != 0)
                rax_11.b = 1
            else
                if (rbp_1 == 0 || (*(rbp_1 + 0x290) & 0x100000) != 0)
                    void* rax_13 = sub_140cddb10()
                    void* rdx_8 = *(rax_7 + 0x10)
                    rax_11 = sx.q(*(rax_13 + 0x38))
                    
                    if (rax_11.d s> *(rdx_8 + 0x38))
                        rax_11.b = 0
                    else if (*(*(rdx_8 + 0x30) + (rax_11 << 3)) != rax_13 + 0x30)
                        rax_11.b = 0
                    else if (sub_140ce1120(rax_7 + 0x230).b != 0)
                        rax_11.b = 0
                    else
                        rax_11.b = 1
                
                if ((rbp_1 == 0 || (*(rbp_1 + 0x290) & 0x100000) != 0) && rax_11.b != 0)
                    rax_11.b = 1
                else
                    rax_11.b = 0
            
            void* rcx_14 = arg1[0x10]
            int64_t rcx_15
            
            if (rcx_14 != 0)
                rcx_15 = sx.q(*(rcx_14 + 0x38))
            
            if ((rcx_14 == 0 || rcx_15.d s> *(rax_7 + 0x38)
                    || *(*(rax_7 + 0x30) + (rcx_15 << 3)) != rcx_14 + 0x30) && rax_11.b == 0)
                sub_140b63b70(&arg1[5], &var_38)
                int16_t* const rbx_1 = &data_142d40450
                int64_t* rax_14 = sub_140d21830(rax_7, &var_28, 0, 0)
                
                if (rax_14[1].d != 0)
                    rbx_1 = *rax_14
                
                sub_140b1f700(arg6, u"Invalid object '%s' specified for property '%s'", rbx_1)
                int64_t* rcx_20 = var_28
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                int64_t rcx_21 = var_38.q
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
                
                (*(*arg1 + 0x148))(arg1, arg3, 0)
                return 0

return result
