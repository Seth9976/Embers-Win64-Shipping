// 函数: sub_1422dbba0
// 地址: 0x1422dbba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d s> 0)
    int64_t* r15_1 = nullptr
    
    do
        void* rbx_1 = *(r15_1 + *arg1)
        
        if (rbx_1 != 0)
            int64_t j = 2
            void* rsi_1 = rbx_1 + 0x1588
            
            do
                int64_t rcx = *(rsi_1 - 0x10)
                rsi_1 -= 0x10
                j -= 1
                
                if (rcx != 0)
                    sub_140a74f90(rcx)
            while (j != 0)
            
            int64_t rcx_1 = *(rbx_1 + 0x1558)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            sub_1405d1550(rbx_1 + 0x1538)
            sub_1405d1550(rbx_1 + 0x1530)
            sub_1405d1550(rbx_1 + 0x1528)
            sub_1413c44e0(rbx_1 + 0xde0)
            
            if (*(rbx_1 + 0xdc4) != 0)
                *(rbx_1 + 0xdc4) = 0
            
            int64_t rcx_6 = *(rbx_1 + 0xcf0)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *(rbx_1 + 0xc50)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            sub_1413c3330(rbx_1 + 0xb90)
            *(rbx_1 + 0xb88) = 0
            int64_t rcx_9 = *(rbx_1 + 0xb80)
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            *(rbx_1 + 0xb48) = 0
            
            if (*(rbx_1 + 0xb4c) != 0)
                sub_140638cc0(rbx_1 + 0xb40, 0)
            
            *(rbx_1 + 0xb70) = 0xffffffff
            *(rbx_1 + 0xb74) = 0
            sub_14059a8e0(rbx_1 + 0xb50, 0)
            int64_t rcx_12 = *(rbx_1 + 0xb60)
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            int64_t rcx_13 = *(rbx_1 + 0xb40)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            if (*(rbx_1 + 0x6a0) != 0)
                *(rbx_1 + 0x6a0) = 0
            
            sub_1413c5a50(rbx_1 + 0x50)
            int64_t j_2 = 4
            void* rsi_2 = rbx_1 + 0x38
            int64_t j_1
            
            do
                rsi_2 -= 8
                sub_1405d1550(rsi_2)
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
            sub_1405d1550(rbx_1 + 0x10)
            j_sub_140a74f90(rbx_1)
        
        i += 1
        r15_1 = &r15_1[1]
    while (i s< arg1[1].d)

int64_t* rcx_18 = arg1[0x11]

if (rcx_18 != 0)
    (**rcx_18)(rcx_18, 1)

int64_t result = sub_140596e10(&arg1[0xc])
int64_t rcx_20 = *arg1

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20) __tailcall
